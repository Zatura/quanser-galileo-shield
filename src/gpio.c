/*
 * ============================================================================
 *
 *       Filename:  gpio.c
 *
 *    Description:  Main file of the project
 *
 *        Created:  16/06/2019
 *       Compiler:  gcc
 *
 *         Author:  Matheus Toazza Tura
 *                  Daniel Maia Cunha
 *                  Arthur Ribeiro
 *
 *   Organization:  UFRGS
 *
 * ============================================================================
 */

static void allow_access_by_user(unsigned int pin, const char *filename) {
  char path[PATH_MAX];
  int size = snprintf(path, PATH_MAX, "/sys/devices/virtual/gpio/gpio%u/%s", pin, filename);

  if (size >= PATH_MAX) {
    error(7, 0, "path of GPIO pin is too long!");
  }

  if (chown(path, getuid(), getgid()) != 0) {
    error(5, errno, "failed to change group ownership of %s", path);
  }

  if (chmod(path, S_IRUSR|S_IWUSR) != 0) {
    error(6, errno, "failed to set permissions of %s", path);
  }
}

static void write_pin_to_path(const char *path, unsigned int pin) {
  FILE * out = fopen(path, "w");

  if (out == NULL) {
    error(3, errno, "could not open %s", path);
  }

  if (fprintf(out, "%u\n", pin) < 0) {
    error(4, errno, "could not write GPIO pin number to %s", path);
  }

  if (fclose(out) == EOF) {
    error(4, errno, "could not flush data to %s", path);
  }
}

static void set_pullupdown(int pin, int direction) {
    volatile uint32_t* gpio;
    int fd = open("/dev/mem", O_RDWR|O_SYNC);
    if (fd < 0) {
        fprintf(stderr, "could not open /dev/mem: %s\n", strerror(errno));
        exit(-1);
    }

    gpio = (volatile uint32_t*) mmap(NULL, BLOCK_SIZE, PROT_READ|PROT_WRITE, MAP_SHARED, fd, GPIO_BASE);
    if (gpio == MAP_FAILED) {
        fprintf(stderr, "could not map GPIO region: %s\n", strerror(errno));
        close(fd);
        exit(-1);
    }

    // set the direction
    gpio[GPPUD] = direction;
    usleep(100);

    // clock it in to the single pin
    gpio[GPPUDCLK0+BANK(pin)] = BIT(pin);
    usleep(100);

    gpio[GPPUD] = 0;
    gpio[GPPUDCLK0+BANK(pin)] = 0;

    munmap((char*)gpio, BLOCK_SIZE);
    close(fd);
}
