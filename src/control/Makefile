TARGET=control.a
SRCS=control.c decoder.c decoder.c motion.c pwm.c

FLAGS=-Wall -MMD
INCLUDE=-I. -I ../../include
LIBDIR=
LIBS=
BUILDDIR=../../build
BINDIR=../../bin

CC=$(CROSS_COMPILE)gcc
CCAR=$(CROSS_COMPILE)ar
CFLAGS=$(FLAGS) $(INCLUDE)
LDFLAGS=$(LIBDIR) $(LIBS)
CCARFLAGS=-crvs

OBJECTS=$(addprefix $(BUILDDIR)/, $@)
OBJECTS2=$(addprefix $(BUILDDIR)/, $^)
#subsystem:
   #$(MAKE) -C subdir

all: $(TARGET)
$(TARGET): $(SRCS:.c=.o)
	$(CCAR) $(CCARFLAGS) $(OBJECTS) $(OBJECTS2)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $(OBJECTS) $<

-include $(SRCS:.c=.d)

clean:
	rm -f *~ *.bak ../../build/*.o ../../build/*.d

distclean: clean
	rm -f $(TARGET)
