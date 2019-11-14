# quanser_galileo_shield
Controlling a high-power quanser robotic arm with a hand-made Galileo compatible shield.  
PCB project design and simulation were made using proteus  https://www.labcenter.com/pcb/  
![Shield Schematic](https://github.com/Zatura/quanser-galileo-shield/blob/master/hardware/schematic.pdf)  
![Report (portuguese)](https://github.com/Zatura/quanser-galileo-shield/blob/master/Projeto_Microcontroladores.pdf)  
  
![shield](https://github.com/Zatura/quanser-galileo-shield/blob/master/images/shield2.jpg) 

### Bare Copper PCB  
<img src="https://github.com/Zatura/quanser-galileo-shield/blob/master/images/bare_metal.jpg" alt="alt text" width="400" height="400">

### UV Masking(red tint)   
<img src="https://github.com/Zatura/quanser-galileo-shield/blob/master/images/uv_masking.jpg" alt="alt text" width="400" height="510">
  
# Use and Compilation
Compile using `make`  
After compilation success, executable `qmotion` should be at `/bin` folder 
 
```
qmotion - quanser motion

USAGE
	qmotion [options] input file

DESCRIPTION
	qmotion is a quanser robotic arm controller

OPTIONS
	-v, --version
		Prints qmotion version
    
	-h, --help
		Prints this help message

	-m VOLTAGE TIME, --move VOLTAGE TIME
		Moves the quanser robotic arm using VOLTAGE(-27 to 27) during TIME seconds 

	-t ANGLE, --target ANGLE 
		Moves the quanser robotic arm to the target at ANGLE degrees 

	-d, --decoder
		Reads and shows decoder and limit switch status

	-r, --reset
		Resets decoder register

	-p P I D, --pid P I D 
		Sets Proportional(P), Integrative(I) and Derivative(D) gains, saved at pid.dat file
    
	--no-color
		Does not use colors for printing
```    
    
# Examples

https://link.springer.com/content/pdf/10.1007/978-1-4302-6838-3_14.pdf

# Pins

IO0: D7 (encoder bit 7)  
IO1: D6 (encoder bit 6)  
IO2: D5 (encoder bit 5)  
IO3: D4 (encoder bit 4)  
IO4: D3 (encoder bit 3)  
IO5: D2 (encoder bit 2)  
IO6: D1 (encoder bit 1)  
IO7: D0 (encoder bit 0)  

IO8 :  !RST (Reset for 16-bits encoder register)  
IO9 :  !OE (Enable, activates the tristate buffer from the register)  
IO10 :  SEL (Selector for 16-bits encoder high or low byte in register)  
IO11:  PWM (pulse modulation width)  
IO12: SD (bridge-drivers shutdown)  
IO14: LMT_SWT2 (arm limit-sensor input)  
IO15: LMT_SWT1 (arm limit-sensor input)  
