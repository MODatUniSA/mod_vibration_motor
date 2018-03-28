// MOD. vibration motors
// =====================

// Parts
// -----
// Arduino micro-controller - Adafruit Trinket M0
// Battery charger - Adafruit Powerboost 1000C
// Vibration motors - 2mm 1020 Motors from Seeed
// Transistor for switching on the motors - BD681
// Protection diode for the motors - 1N4007
// Resistor for the Arduino pin - 4.7 k Ohm

// Set names for the vibration motor pins
int motorPin1 = 0;
int motorPin2 = 1;

void setup() {
  // Setup the vibration motor pins as output pins
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  // Turn on each for a random time with a random delay
  digitalWrite(motorPin1, HIGH);
  delay(randomDelay());
  digitalWrite(motorPin1, LOW);
  delay(randomDelay());

  digitalWrite(motorPin2, HIGH);
  delay(randomDelay());
  digitalWrite(motorPin2, LOW);
  delay(randomDelay());
}

int randomDelay() {
  // Delay between 200 ms and 1 second
  return random(200, 1000);
}


