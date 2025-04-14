# Bluetooth-protocol

Bluetooth Protocol Communication using HC-05 and Arduino
Overview:
The HC-05 is a Bluetooth Serial Port Protocol (SPP) module designed for wireless serial communication. It can be used to replace a wired serial (RS-232) connection and is widely used in Arduino-based wireless projects.

This module operates using the Bluetooth 2.0 protocol, and it can function as either a master or slave. Most commonly, it's used in slave mode to communicate with smartphones, computers, or other Bluetooth-enabled devices.

Components Required:
Arduino Uno

HC-05 Bluetooth Module

Jumper wires

Breadboard (optional)

Android phone (for testing communication via a Bluetooth terminal app)

Pin Configuration of HC-05:
Pin	Function
VCC	Power (3.6V - 6V)
GND	Ground
TXD	Transmit Data
RXD	Receive Data
KEY/EN	Enable AT Mode (optional)
STATE	Connection Status (optional)
Wiring with Arduino (Uno Example):
HC-05 Pin	Arduino Pin
VCC	5V
GND	GND
TXD	RX (Pin 0)
RXD	TX (Pin 1) (through a voltage divider: 1kΩ + 2kΩ recommended)
⚠️ Important: HC-05 is not 5V tolerant on RXD. Use a voltage divider or logic level shifter to avoid damage.

How It Works:
Serial Communication: The HC-05 communicates with Arduino using UART (Universal Asynchronous Receiver/Transmitter). It uses the Serial object in Arduino to send and receive data.

Wireless Link: When paired with a Bluetooth-enabled device, the module wirelessly transmits/receives serial data.

Bluetooth SPP Protocol: It operates on the Bluetooth SPP protocol, enabling a virtual serial link between devices.

Data Transfer: You can send characters, strings, or sensor data from Arduino to a mobile device and vice versa.


Advantages:
Simple to use with Arduino

Low power consumption

Reliable short-range communication (~10 meters)

Supports both master and slave configurations



Applications:
Home automation (e.g., control lights or appliances)

Wireless sensor monitoring

Robotics (wireless remote control)

Wireless data logging
