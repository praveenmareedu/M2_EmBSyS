# 1.1 HIGH LEVEL TEST PLAN
* Setpoint (25°C)

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 01 | POT/Sensor | Push button to (25°C) | LED green heater ON | LED green heater ON | ✅ |
| 02 | POT/Sensor | Push button to (35°C) | LED red heater OFF | LED red heater OFF | ✅ |


### Here below are the some of the *unity test/ unity framework* test plans there are so many but I have only mentiones some of the test cases here.

# 1.2 LOW LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |

| Test ID (for LCD)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for LCD_Char() | P  | P |  P | ✅ |
| 02 | Check for LCD_String() | Praveen | Praveen | Praveen | ✅ |
| 03 | Check for LCD_String() | Git | Git | Git | ✅ |


| Test ID (for ADC)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for ADC_Read() | 0V | 0 | 0 | ✅ |
| 02 | Check for ADC_Read() | 5V | 1023 |  1023 | ✅ |

| Test ID (for mapping, map)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for map() | map(20, 492, 478, 20, 35) | 525 |  525 | ✅ |
| 02 | Check for map() | map(25, 492, 478, 20, 35) | 520 |  520 | ✅ |
| 03 | Check for map() | map(30, 492, 478, 20, 35) | 515 |  515 | ✅ |
| 04 | Check for map() | map(35, 492, 478, 20, 35) | 509 |  509 | ✅ |
---
