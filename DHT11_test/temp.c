// sketch --> include library --> add zip or manage
// sudo chmod a+rw dev/portName

// to plot, ue print()
// for multiple values, print() then print(" ") and print next quantity
// the last quantity must use println() and not print()

#include "DHT.h"
#define Type DHT11

int sensePin = 2;//digital pin 
DHT dht(sensePin, Type);//CReate object n pass sensePin & Type

float tempC;
flaot tempF;

void setup(){
    Serial.begin(9600);
    dht.begin();
}

void loop(){
    tempC = dht.readTemperature();
    tempF = dht.readTemperature(true);//true for fahrenheit

    Serial.print(tempC);
    Serial.print(tempF);
    delay(200);
}