#define RED_PIN 11
#define GREEN_PIN 12
#define BLUE_PIN 10
#define POTENTIOMETER_PIN1 A1
#define POTENTIOMETER_PIN2 A2
#define POTENTIOMETER_PIN3 A3



void setup()
{
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop()
{
  int potentiometerValue1 = analogRead(POTENTIOMETER_PIN1);
  int potentiometerValue2 = analogRead(POTENTIOMETER_PIN2);
  int potentiometerValue3 = analogRead(POTENTIOMETER_PIN3);



  float brightness1 = potentiometerValue1 / 4;
  float brightness2 = potentiometerValue2 / 4;
  float brightness3 = potentiometerValue3 / 4;


  analogWrite(RED_PIN, brightness1);
  analogWrite(GREEN_PIN, brightness2);
  analogWrite(BLUE_PIN, brightness3);


}

/*https://roboticsbackend.com/arduino-control-led-brightness-with-a-potentiometer/*/
