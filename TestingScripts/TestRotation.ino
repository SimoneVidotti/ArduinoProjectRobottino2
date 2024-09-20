#define motorPin A7

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  analogWrite(motorPin, 250);  // Send 5V signal to rotate the motor
  delay(1000);  // Keep the motor rotating for 1 second
  analogWrite(motorPin, 0);  // Stop the motor
  delay(1000);  // Wait for 1 second before rotating again
}