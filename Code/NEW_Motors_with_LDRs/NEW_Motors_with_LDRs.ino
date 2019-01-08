/*    Arduino Long Range Wireless Communication using HC-12
                      Example 01
   by Dejan Nedelkovski, www.HowToMechatronics.com
*/
#include <SoftwareSerial.h>

SoftwareSerial HC12(10, 11); // HC-12 TX Pin, HC-12 RX Pin

char incomingByte;

void setup() {
  Serial.begin(9600);             // Serial port to computer
  HC12.begin(9600);               // Serial port to HC12
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  pinMode(2, OUTPUT); // A-1A - WHITE
  pinMode(3, OUTPUT); // A-1B - PURPLE
  pinMode(4, OUTPUT); // B-1A - WHITE
  pinMode(5, OUTPUT); // B-1B - PURPLE

  pinMode(6, OUTPUT);

}
void loop() {
  while (HC12.available()) {        // If HC-12 has data
    incomingByte = HC12.read();
  }
  digitalWrite(2, LOW);   
  digitalWrite(3, LOW);   
  digitalWrite(4, LOW);   
  digitalWrite(5, LOW);

  if  (incomingByte == 'w') {
    digitalWrite(2, LOW);   
    digitalWrite(3, HIGH);   
    digitalWrite(4, HIGH);   
    digitalWrite(5, LOW);  
  }

  if (incomingByte == 's') {
    digitalWrite(2, HIGH);   
    digitalWrite(3, LOW);   
    digitalWrite(4, LOW);   
    digitalWrite(5, HIGH);     
  }

  if (incomingByte == 'a') {
    digitalWrite(2, HIGH);   
    digitalWrite(3, LOW);   
    digitalWrite(4, HIGH);   
    digitalWrite(5, LOW);    
  }

  if (incomingByte == 'd') {
    digitalWrite(2, LOW);   
    digitalWrite(3, HIGH);   
    digitalWrite(4, LOW);   
    digitalWrite(5, HIGH);
  }

  

  if ((sensorValue1 > 200) || (sensorValue2 > 200) || (sensorValue3 > 200) {
    HC12.print("e");
  }
  if ((sensorValue1 < 200) || (sensorValue2 < 200) || (sensorValue3 < 200) {
    HC12.print("f");
  }
}
