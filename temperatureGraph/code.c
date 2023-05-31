#include "DHT.h"
#define type DHT22//in prac, may use dht11 or dht22, adjust accordingly

int sensor = 2;
DHT dht(sensor, type);

float temp;


void setup(){
  Serial.begin(9600);
  dht.begin();

}

void loop(){
  temp = dht.readTemperature();

  Serial.println(temp);

// after executing, open serial plotter to show graph on arduinoIDE
}
