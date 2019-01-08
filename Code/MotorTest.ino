/*    Arduino Long Range Wireless Communication using HC-12
                      Example 01
   by Dejan Nedelkovski, www.HowToMechatronics.com
*/

void setup() {
  Serial.begin(9600);
  Serial.println("serial is working");
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, OUTPUT); // A-1A - WHITE
  pinMode(3, OUTPUT); // A-1B - PURPLE
  pinMode(4, OUTPUT); // B-1A - WHITE
  pinMode(5, OUTPUT); // B-1B - PURPLE
  Serial.println("pins set out");
}
void loop() {
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("line 1");
  delay(2000);
  Serial.println("after first delay");
  digitalWrite(2, LOW);   
  digitalWrite(3, LOW);   
  digitalWrite(4, LOW);   
  digitalWrite(5, LOW);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    Serial.println("before second");
  delay(2000);
    Serial.println("after second delay");
  digitalWrite(2, LOW);   
  digitalWrite(3, HIGH);   
  digitalWrite(4, HIGH);   
  digitalWrite(5, LOW);  
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);
    Serial.println("after third delay");
  digitalWrite(2, HIGH);   
  digitalWrite(3, LOW);   
  digitalWrite(4, LOW);   
  digitalWrite(5, HIGH);     
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
    Serial.println("after f4t delay");
  digitalWrite(2, HIGH);   
  digitalWrite(3, LOW);   
  digitalWrite(4, HIGH);   
  digitalWrite(5, LOW);    
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);
    Serial.println("after fifth delay");
  digitalWrite(2, LOW);   
  digitalWrite(3, HIGH);   
  digitalWrite(4, LOW);   
  digitalWrite(5, HIGH); 
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
    Serial.println("repeat");
}
