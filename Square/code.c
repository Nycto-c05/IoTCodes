void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Enter number: ");

  while (!Serial.available()) {
    // Wait for input
  }

  int number = Serial.parseInt();
  Serial.println();

  Serial.print("The square is: ");
  Serial.println(number * number);
}
