int sensorPin1 = A0; // select the input pin for LDR
int sensorPin2 = A1; // select the input pin for LDR
int sensorPin3 = A2; // select the input pin for LDR

int sensorValue1 = 0; // variable to store the value coming from the sensor
int sensorValue2 = 0; // variable to store the value coming from the sensor
int sensorValue3 = 0; // variable to store the value coming from the sensor

void setup() {
Serial.begin(9600); //sets serial port for communication
}
void loop() {
sensorValue1 = analogRead(sensorPin1); // read the value from the sensor
sensorValue2 = analogRead(sensorPin2); // read the value from the sensor
sensorValue3 = analogRead(sensorPin3); // read the value from the sensor

Serial.print("Value 1 is: ");
Serial.print(sensorValue1); //prints the values coming from the sensor on the screen

Serial.print(" Value 2 is: ");
Serial.print(sensorValue2); //prints the values coming from the sensor on the screen

Serial.print(" Value 3 is :");
Serial.println(sensorValue3); //prints the values coming from the sensor on the screen

delay(100);

}
