#include <Servo.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2 
#define MOTEUR 5

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
DeviceAddress sensorDeviceAddress;

Servo myservo;
double temp = 90;

void setup(){    
  //pinMode(TEMP_SENSOR, INPUT);
  Serial.begin(9600);
  myservo.attach(MOTEUR);
  myservo.write(temp);
  sensors.begin();
}
  
void loop(){
  sensors.requestTemperatures(); //Demande la température aux capteurs
  temp = sensors.getTempCByIndex(0);
  Serial.print("La température est: ");
  Serial.print(temp);
  Serial.println(" C°");
}
