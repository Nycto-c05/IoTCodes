/*Create a program that illuminates the green LED if the counter is less than 100, illuminates the
yellow LED if the counter is between 101 and 200 and illuminates the red LED if the counter is
greater than 200*/
int red = 13;
int yellow = 12;
int counter = 0;



void setup() {


  Serial.begin(9600);

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

  digitalWrite(13, LOW);
  digitalWrite(12, LOW);

}

void loop() {

  Serial.print("Counter : ");
  Serial.println(counter);

  if(counter <= 100){
    digitalWrite(yellow, HIGH);
    counter++;
  }
  else if(counter > 100 && counter <= 200){
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    counter++;
  }
  else if(counter>200){
    digitalWrite(red,LOW);
    exit(0);
  }

}
