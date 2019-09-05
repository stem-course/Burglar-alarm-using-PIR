/*
Code by: www.munphurid.com
Syed Rafay Hashmi

This is a code for a burglar alarm
It plays buzzer whenever any movement is detected by PIR sensor

Hardware:
- Arduino
- RGB Led


Connections:
(when sensor is facing towards you, left most is pin 1)

Connect pin1 of PIR to pin 5V of Arduino
Connect pin2 of PIR to pin 9 of Arduino
Connect pin3 of RGB to pin GND of Arduino

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
  
 if  (digitalRead(PIR)== HIGH){         // the body of if statement(s) will executes only if the given condition is true
  
    digitalWrite(BUZZER,HIGH);          // this will turn on the buzzer if there is any movement
    delay(1000);                        //arduino will sleep for 1 second
 }
 else{
     digitalWrite(BUZZER,LOW);          // this will turn off the buzzer
     delay(1000);                       // arduino will sleep for 1 second
  }

}
