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
}
void loop() {
  while (HC12.available()) {        // If HC-12 has data
    incomingByte = HC12.read();
  }

  if  (incomingByte == 'o') {
    digitalWrite(LED_BUILTIN, HIGH);
  }

  if (incomingByte == 'f') {
    digitalWrite(LED_BUILTIN, LOW);
  }
  
}
