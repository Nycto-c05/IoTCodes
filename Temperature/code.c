#include "DHT.h"
#define type DHT11//in prac, may use dht11 or dht22, adjust accordingly

int sensor = 2;
DHT dht(sensor, type);

float tempC;

void setup(){
  Serial.begin(9600);
  dht.begin();

}

void loop(){
  tempC = dht.readTemperature();
  Serial.print("Temperature : ");
  Serial.print(tempC);
  Serial.println(" C");

  delay(200);
}
