#include "DHT.h"
#define type DHT11//in prac, may use dht11 or dht22, adjust accordingly

int sensor = 2;
DHT dht(sensor, type);

float tempF;
float min = 999999;
float max = -999999;

void setup(){
  Serial.begin(9600);
  dht.begin();

}

void loop(){
  tempF = dht.readTemperature(true);//by passing 'true', we read temp in Fahrenheit

  if(tempF>max)
  {
    max = tempF;
  }
  if(tempF<min)
  {
    min = tempF;
  }

  Serial.print("Temperature : ");
  Serial.print(tempF);
  Serial.print(" F    ");

  Serial.print("MAX : ");
  Serial.print(max);

  Serial.print("    MIN: ");
  Serial.println(min);


  delay(500);
}
