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
  * ### 2a. High Level Flow chart Behavioural Diagram
  ![HLFBEHAV](https://user-images.githubusercontent.com/98843450/156885661-34c97e68-c62a-45d7-9318-14e720ab6935.png)
  * ### 2b. Low Level Flow chart Behavioural Diagram
  * ![LLFBEHAV](https://user-images.githubusercontent.com/98843450/156885771-7e293468-be59-40af-a30a-50769d2345e0.png)
   * ##  Structural Diagrams
   * ### 2c. High Level UML Use Case Structural Diagram
   * ![HLSTRUCT](https://user-images.githubusercontent.com/98843450/156886232-41e7aae4-8be3-4031-aa30-98133231b52d.png)
   * ### 2d. Low Level UML Use Case Structural Diagram
   * ![LLSTRUCT](https://user-images.githubusercontent.com/98843450/156886328-2379bd83-01ce-46c4-854c-3ea10f0277d5.png)

 ---
 
 # Best Methods to be Followed
* Exact Mapping of code to avoid confusions
* Mentioning of both High level and Low level Behavioral and structural diagrams for better understanding
* Followed the exact symbols to make the understanding easier
* Detailed explanation in Low level Behavioural and Structural Diagrams



