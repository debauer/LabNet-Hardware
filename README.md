# LabNet Hardware

#LabNet-canable

a fork of canable  
Easy access the LabNet from any PC and integrate Raspberry PIs and Beaglebones in the Infrastructure.

![Image of canable mod](https://github.com/fablab-ka/LabNet-canable/blob/master/image.jpg?raw=true)

# Nodes Generation 2

### Power-Hub

David, Fablab KA, www.debauer.net

- 4x USB mit 5V und 5A
- 8x RJ45 LabNet (2x CA, 24V)
- 2x RJ45 LabNet Passtrouth (2x CAN, no Power)
- 1x RJ45 Rittal Steckdosenleisten (RS485, 24V)
- 8x Schmelzsicherung (2A) für Verbrauchergruppen
- 1Wire DS18x20 (Temperatur)
- LabNet Node (Sicherungsstatus, RS485, 1Wire Temperatur)

### Basis

David, Fablab KA, www.debauer.net

- 5V 5A DCDC
- Arduino Pro Mini
- CAN Controller
- 1x RJ45 Rittal Steckdosenleisten (RS485, 24V)
- 2x RJ45 LabNet passthru (2x CAN, no Power)
- 1Wire DS18x20 (Temperatur)
- Addon Buchsen (~80% Arduino Pinning, aber nicht Mechanisch Kompatibel)

### Basis Addon HR20

David, Fablab KA, www.debauer.net

- 1,44" LCD 128x128px SPI
- 3 Buttons
- 1:1 10 Pol Wannenstecker für HR20 Heizungsregler

### Basis Addon RGBW

David, Fablab KA, www.debauer.net

- 4x Mosfet
- i2c PWM Treiber

# Obsolote Nodes Generation 1

### iomodul V2.0 10'14
Obsolete + working Prototypes @ FabLab KA

Sarah, Fablab KA  
Florolf, Entropia KA  

![Image of node](http://abload.de/img/imagedkpbv.jpg)

### iomodul V2.1 03'15 mod 

Obsolete + no Prototype

David Bauer, FabLab KA

- Hühnerfutter size changed from 0604 to 0805
- added and moved the LEDs
- changed JTAG/SWD connector layout to fit ti the STM SWD

![Image of node](http://abload.de/img/image3aoeb.jpg) 

### iomodul V3.0 06'15 swap ARM Chip

Obsolete + no Prototype

- Changed ARM from STM M0 to ATMEL SAM D21 (ARM M0)
- added USB

![Image of node](http://abload.de/img/imagepprxw.jpg)