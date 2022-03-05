# 1. About Digital Temperature Controller

## 1a. Description

* Digital Temperature Controller using arduino here we are using arduino as main controller this temperature controller controls the temperature of any heating device with given set points, It also displays state of the device either on or off and current temperature.
As the name implies, a temperature controller is an instrument used to control temperature. The temperature controller takes an input from a temperature sensor and has an output that is connected to a control element such as a heater or fan.
To accurately control process temperature without extensive operator involvement, a temperature control system relies upon a controller, which accepts a temperature sensor such as a thermocouple RTD and LM35 as input. It compares the actual temperature to the desired control temperature, or set-point, and provides an output to a control element.
Here in my project I used Potentiometer in place of sensor input.

## 1b. Features of This Project

* Push Buttons are provided to ease the access of Increasing and Decreasing of temperature.
* LCD display is availbale to know how much you have set your Temperature and the temperature from sensor.
* Automatic turning off the heater whenever it is reached the maximum cut off set by you with relay mechanism.

## 1c. State of Art

* The main focus of this project is to control the heater to the set point which is set by the user as so many safety measures are required in our daily everything cannot be depend on human which makes some mistakes so to eliminate thes we need a system which can automatically control itself

## 1d. 5 W's and 1 H

* WHO   - One with houses industries and other public places.
* WHAT  - Temperature control with setpoint interface.
* WHEN  - People when they are using heaters and other temeperature dependent appliances.
* WHERE - Anywhere in house, industry, shops etc.
* WHY   - To control the electrical appliances which are heat based.
* HOW   - Simply set a Point by using Push button.

## Swot Analysis

* Strengths - Less effort, can control temperature just with push button, Saftey free
* Weakness  - Unable to monitor using your mobile, System is not safe in case of fire, Consumes more power
* Oppurtunities - Scope of it very useful because it is used in so many home appliances '
* Threats - Beware with heat and takecare of circuit cleanly
# 2. Requirements 

## 2a High Level Requirements

| ID | High Level Requirements |
| -------- | -------------- |
| HLR1 | System shall control temeperature by pressing push  button |
| HLR2 | There shall be a LCD to display the Increase or decrease the temp. we press |
| HLR3 | A LCD is must to know display|
| HLR4 | System should detect temperature |

## 2.2 Low Level Requirements

| ID | Low Level Requirements for HL1|       |ID | Low Level Requirements for HL2|
| -------- | -------------- | ---- |-------- | -------------- |
| LLR1.1 |  According to the pushbutton  temeperature shall be controlled | | LLR2.1 | Pushed value shall be displayed on __LCD__ Screen |
| LLR1.2 | According to the setpoint opening,closing of relay and leds shall be controlled || LLR2.2 | Temperature should display |
