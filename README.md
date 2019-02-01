# Summary

In this project I used a servo motor to open the lit of a cereal box whenever the scoop is removed from its holder. To accomplish this, I used a ultrasonic distance sensor that points to the location of the scoop, whenever there is a difference in distance, the servo will respond and open the lit.

**Demo**



# How to install

- Clone the project to your local system.
- Open automatic_box_opener.ino in ArduinoIDE. If you dont have ArduinoIDE installed, go to the following website and follow the instructions to get started: https://www.arduino.cc/en/main/software
- Follow the circuit diagrams and list of components provided bellow to setup the circuit.
- Connect the arduino board to your computer using the A-to-B USB.
- In the Arduino IDE, compile the code to ensure it runs properly.
- Download the code to the arduino board.
- OPTIONAL: once the code has been downloaded to the board, disconnect the USB cable from the board and connect the 9V battery(use battery adapter) instead.

# Components

- UNO R3 Controller Board
- Breadboard
- Servo motor
- Ultrasonic distance sensor(HCSR04)
- Jumper wires
- USB Cable A-to-B
- 9v battery
- Battery adapter

# Circuit Diagrams

**Schematic**

![](/media/auto_box_opener_schematic.PNG)

**Breadboard**

![](/media/auto_box_opener_breadboard.PNG)

**Actual circuit**
![](/media/auto_box_opener_real_circuit.PNG)
