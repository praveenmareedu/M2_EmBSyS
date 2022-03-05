# 1. Block Diagram and Explanation

## 1a. Block Diagram

![BLOCK_ Lucidchart ](https://user-images.githubusercontent.com/98843450/156881425-a14a9fe5-c274-4b24-afed-b86e6e2c23c1.png)

## 1b. SENSORS

* ### Temperature Sensor (Thermistor) or Potentiometer
    * This Thermistor is a resistor whose resistance is dependent on temperature here this change in resistence produces change in voltage, this voltage is taken as input to micro controller.
* ### PushButton:
    *  Provides an interface to increase or decrease temperature.

## 1c. ACTUATORS

* ### LCD Display:
    * Displays each and every value we enter in our Push button along with Temperature.
* ### Relay:
    * It will act as a Mechanical switch whenever your set point reached my the heater the relay will cut the circuit until it gets cool
    
## 1d. MICRO CONTROLLER AND ARDUINO

* ### MicroController:
    * In general we used here ATMEGA 328 its is just as brain to entire circuit
    * This is the main component which controls all the above mentioned part or thins of our embedded system.This interfaces Pushbuttons and LCD and controls the heater.
 
# 2. Architecture
* ## Behavioural Diagrams
  * ### 2a High Level Flow chart Behavioural Diagram
