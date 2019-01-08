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

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, OUTPUT); // A-1A - WHITE
  pinMode(3, OUTPUT); // A-1B - PURPLE
  pinMode(4, OUTPUT); // B-1A - WHITE
  pinMode(5, OUTPUT); // B-1B - PURPLE
}

// the loop function runs over and over again forever
void loop() {

  //STOP
  digitalWrite(2, LOW);   
  digitalWrite(3, LOW);   
  digitalWrite(4, LOW);   
  digitalWrite(5, LOW);   
  delay(5000);                       // wait for 5 seconds
  
  //RIGHT MOTOR - BACKWARDS
  digitalWrite(2, HIGH);   
  digitalWrite(3, LOW);   
  digitalWrite(4, LOW);   
  digitalWrite(5, LOW);   
  delay(1000);                       // wait for a second
  
  //RIGHT MOTOR - FORWARDS
  digitalWrite(2, LOW);   
  digitalWrite(3, HIGH);   
  digitalWrite(4, LOW);   
  digitalWrite(5, LOW);   
  delay(1000);                       // wait for a second
  
  //LEFT MOTOR - FORWARDS
  digitalWrite(2, LOW);   
  digitalWrite(3, LOW);   
  digitalWrite(4, HIGH);  
  digitalWrite(5, LOW);   
  delay(1000);                       // wait for a second
  
  //LEFT MOTOR - BACKWARDS
  digitalWrite(2, LOW);   
  digitalWrite(3, LOW);   
  digitalWrite(4, LOW);   
  digitalWrite(5, HIGH);  
  delay(1000);                       // wait for a second
}
