// Define the pin for the relay
const int relayPin = A3;

void setup() {
  // Initialize the relay pin as an output
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // Turn the relay on
  digitalWrite(relayPin, HIGH);
  // Wait for 5 seconds
  delay(5000);
  
  // Turn the relay off
  digitalWrite(relayPin, LOW);
  // Wait for 5 seconds
  delay(5000);
}
