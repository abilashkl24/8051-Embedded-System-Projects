# Forward & Reverse LED Control

This project demonstrates the **Forward and Reverse LED control using the 8051 microcontroller**. Two LEDs connected to the microcontroller indicate the forward and reverse directions. The LEDs operate automatically based on the programmed time delay.

## Components Used

* AT89C51 / 8051 Microcontroller
* 8 LEDs
* Proteus 8
* Keil uVision

## Software Used

* Keil uVision
* Proteus 8 Professional

## Files

* `forward_reverse.c` → Embedded C source code
* `forward reverse.png` → Proteus circuit
* `forward reverse output.png` → Output screenshot

## Working

The program automatically controls two LEDs to indicate the direction.

* **Forward LED ON** → Indicates Forward direction
* **Reverse LED ON** → Indicates Reverse direction
* A time delay is provided between the Forward and Reverse operations.
* The sequence repeats continuously.

### Sequence

**Forward → Stop → Reverse → Stop → Repeat**

This project helps to understand **GPIO output control, LED interfacing, time delay, and basic direction-control logic using Embedded C and the 8051 microcontroller.**

Output

Circuit Proteus
![Circuit](<output_image.png>)