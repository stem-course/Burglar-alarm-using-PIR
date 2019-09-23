/*
Code by:
Syed Rafay Hashmi
M.Hashir

This is a code for a burglar alarm
It plays buzzer whenever any movement is detected by PIR sensor

Hardware:
- Arduino
- PIR sensor
- Buzzer

Connections:
(When dome of sensor is facing upward and pins are infront of you, left most pin is pin 1)

Connect pin 1 of PIR to pin GND of Arduino
Connect pin 2 of PIR to pin 9 of Arduino
Connect pin 3 of PIR to 5V of Arduino

Connect small leg of Buzzer to GND
Connect longer leg of Buzzer to pin 11 of Arduino
*/

// this program will turn on the buzzer as soon as any movement is detected

int PIR = 9;                            // connect PIR sensor to pin 9 of arduino
int BUZZER = 11;                        // connect buzzer to pin 11 of arduino

void setup() {

pinMode(PIR,INPUT);                     // define the mode of PIR sensor
pinMode(BUZZER,OUTPUT);                 // define the mode of BUZZER
}

void loop() {
  
 if(digitalRead(PIR)== HIGH){         // the body of if statement(s) will executes only if the given condition is true
  
    digitalWrite(BUZZER,HIGH);          // this will turn on the buzzer if there is any movement
   delay(2000);                       //Wait for some time
   digitalWrite(BUZZER,LOW);          // this will turn off the buzzer
 while(digitalRead(PIR)== HIGH)         //Wait till PIR tells that motion has ended   
 }
 
  else{                               //If there is no movement
    digitalWrite(BUZZER,LOW);          // This will turn off the buzzer
  } 
}
