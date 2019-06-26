# quanser_galileo_shield
Controlling a high-power quanser robotic arm with a hand-made Galileo Shield.  
![Shield Schematic](https://github.com/Zatura/quanser_galileo_shield/blob/master/schematic.PDF)  
  
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
IO18: LMT_SWT2 (arm limit-sensor input)  
IO19: LMT_SWT1 (arm limit-sensor input)  
