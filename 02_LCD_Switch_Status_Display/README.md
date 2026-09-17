# LCD Switch Status Display

This project demonstrates **switch interfacing with an LCD using the 8051 microcontroller**. The status of the switch is detected by the microcontroller and displayed on a **16×2 LCD**.

## Components Used

* AT89C51 / 8051 Microcontroller
* 16×2 LCD
* Push Button / Switch
* Resistor
* Proteus 8
* Keil uVision

## Software Used

* Keil uVision
* Proteus 8 Professional

## Files

* `lcd_switch_status.c` → Embedded C source code
* `lcd switch status.png` → Proteus circuit
* `lcd switch status output.png` → Output screenshot

## Working

The switch is connected to a digital input pin of the 8051 microcontroller.

The microcontroller continuously checks the switch status and displays the corresponding message on the 16×2 LCD.

* **Switch ON** → LCD displays **"SWITCH ON"**
* **Switch OFF** → LCD displays **"SWITCH OFF"**

The LCD is updated continuously based on the current switch status.

## Concepts Used

* 8051 GPIO / Port Interfacing
* Switch Interfacing
* 16×2 LCD Interfacing
* Digital Input
* Digital Output
* Embedded C
* Keil and Proteus Simulation

## Learning Outcome

This project helps to understand **switch interfacing, LCD interfacing, digital input handling, and displaying real-time status using Embedded C on the 8051 microcontroller**.

## Output 
## Circuit Image 
![Image](<lcd_switch _status_circuit.png>)

## Output 
![Image](<lcd_switch_ status_output_1.png>)

## Output
![Image](<lcd_switch_ status_output_2.png>)