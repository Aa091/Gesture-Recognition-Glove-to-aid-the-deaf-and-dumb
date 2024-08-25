void setup() {
  Serial.begin(9600);

}

void loop() {
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  int sensorValue3 = analogRead(A2);
  int sensorValue4 = analogRead(A3);
  int sensorValue5 = analogRead(A6);
  // Print the values with a label.
  Serial.println("Sensor 1: ");
  Serial.println(sensorValue1);
  Serial.println("  |  Sensor 2: ");
  Serial.println(sensorValue2);
  Serial.println("  |  Sensor 3: ");
  Serial.println(sensorValue3);
  Serial.println("  |  Sensor 4: ");
  Serial.println(sensorValue4);
  Serial.println("  |  Sensor 5: ");
  Serial.println(sensorValue5);

  // Delay a bit to avoid flooding the serial monitor.
  delay(1000);

}
