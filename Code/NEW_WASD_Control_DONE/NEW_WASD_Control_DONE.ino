/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

#include <SoftwareSerial.h>
SoftwareSerial HC12(10, 11); // HC-12 TX Pin, HC-12 RX Pin

int buttonW = 0;
int buttonA = 0;
int buttonS = 0;
int buttonD = 0;

int sensorPin1 = A0; // select the input pin for LDR
int sensorPin2 = A1; // select the input pin for LDR
int sensorPin3 = A2; // select the input pin for LDR

int sensorValue1 = 0; // variable to store the value coming from the sensor
int sensorValue2 = 0; // variable to store the value coming from the sensor
int sensorValue3 = 0; // variable to store the value coming from the sensor

// the setup function runs once when you press reset or power the board
void setup() {

  Serial.begin(9600);             // Serial port to computer
  HC12.begin(9600);               // Serial port to HC12
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(3, INPUT); //W - up
  pinMode(4, INPUT); //A - left
  pinMode(5, INPUT); //S - down
  pinMode(2, INPUT); //D - right
}

// the loop function runs over and over again forever
void loop() {
  buttonW = digitalRead(2);
  buttonA = digitalRead(3);
  buttonS = digitalRead(4);
  buttonD = digitalRead(5);
  
  if (buttonW == HIGH) {
    HC12.print("w");
  }
  else if (buttonA == HIGH) {
    HC12.print("a");
  }
  else if (buttonS == HIGH) {
    HC12.print("s");
  }
  else if (buttonD == HIGH) {
    HC12.print("d");
  }
  else {
    HC12.print(" ");
  }

  sensorValue1 = analogRead(sensorPin1); // read the value from the sensor
  sensorValue2 = analogRead(sensorPin2); // read the value from the sensor
  sensorValue3 = analogRead(sensorPin3); // read the value from the sensor

  if ((sensorValue1 > 200) || (sensorValue2 > 200) || (sensorValue3 > 200) {
    HC12.print("e");
  }
  if ((sensorValue1 < 200) || (sensorValue2 < 200) || (sensorValue3 > 200) {
    HC12.print("e");
  }
  
}
