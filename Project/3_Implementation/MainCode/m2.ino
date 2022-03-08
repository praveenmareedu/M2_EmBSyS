#include <LiquidCrystal.h>

//  interfacing pins
LiquidCrystal lcd(9, 8, 7, 6, 5, 4);

const int LED_RED=10; //Red LED
const int LED_GREEN=11; //Green LED
const int RELAY=12; //Lock Relay

//Key connections with arduino
const int up_key=3;
const int down_key=2;

int SetPoint=30;
void setup(){
  pinMode(LED_RED,OUTPUT);
  pinMode(LED_GREEN,OUTPUT);  
  pinMode(RELAY,OUTPUT);  
  pinMode(up_key,INPUT);
  pinMode(down_key,INPUT);
  
  //setpoint keys
  digitalWrite(up_key,HIGH);
  digitalWrite(down_key,HIGH);
  
  lcd.begin(16, 2);
  // Message on LCD.
  lcd.print("Temperature Controller");  
  lcd.setCursor(0,1); 
  lcd.print(" Heater Contol");
  digitalWrite(LED_GREEN,HIGH);  //Green LED Off
  digitalWrite(LED_RED,LOW);     //Red LED On
  digitalWrite(RELAY,LOW);       //Turn off Relay
  delay(2000);
}

void loop(){
  double Temperature = ((5.0/1024.0) * analogRead(A0)) * 100;  //10mV per degree 0.01V/C. Scalling

  lcd.setCursor(0,0);
  lcd.print("Curr Temp.:");    //Do not display entered keys
  lcd.print(Temperature);
  
//Creating Setpoints  
  if(digitalRead(down_key)==LOW)
  {
    if(SetPoint>0)
    {
      SetPoint--;    
    }
  }
  if(digitalRead(up_key)==LOW)
  {
    if(SetPoint<150)
    {
      SetPoint++;
    }
  }

//Showing setpoint on LCD
  lcd.setCursor(0,1);
  lcd.print("Set point:");
  lcd.print(SetPoint);
  lcd.print("C   ");

//Checking Temperature limit
if(Temperature > SetPoint)
{
   digitalWrite(RELAY,LOW);    //Turn off heater
   digitalWrite(LED_RED,LOW);
   digitalWrite(LED_GREEN,HIGH);  //Turn on Green LED
}
else
{
  digitalWrite(RELAY,HIGH);    //Turn on heater
  digitalWrite(LED_GREEN,LOW);
  digitalWrite(LED_RED,HIGH);  //Turn on RED LED  
}

  delay(100); //Update at every 100mSeconds
}
