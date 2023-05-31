 String choice;
int green = 13;
int red = 12;


void setup() {
  // put your setup code here, to run once
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);

  digitalWrite(red, LOW);
  digitalWrite(green, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.begin(115200);
  for(;;)
{
    Serial.println("Enter Green(g) or Red(r)");
    while(!Serial.available()); //if nothing on serial port, dont do anything

    choice = Serial.readStringUntil('\n');//read string until enter is pressed

    if(choice == "r"){
      digitalWrite(red, HIGH);
      delay(500);
      digitalWrite(red, LOW);
      delay(500);

    }
    else if(choice == "g"){

      digitalWrite(green, HIGH);
      delay(500);
      digitalWrite(green, LOW);
      delay(500);
    }

    else{
      Serial.println("Invalid i/p");
    }
  }
}
