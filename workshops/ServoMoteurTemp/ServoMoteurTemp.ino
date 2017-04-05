#include <Servo.h>
#include <OneWire.h>
#include <DallasTemperature.h>
  
const int TEMP_SENSOR = 2;

OneWire oneWire(TEMP_SENSOR);
Servo myservo;

DallasTemperature sensors(&oneWire);
DeviceAddress sensorDeviceAddress;

int MOTEUR = 5;

double temp = 90;

void setup(){    
  //pinMode(TEMP_SENSOR, INPUT);
  Serial.begin(9600);
  myservo.attach(MOTEUR);
  myservo.write(temp);

  sensors.begin();
  sensors.getAddress(sensorDeviceAddress, 0); //Demande l'adresse du capteur à l'index 0 du bus
 sensors.setResolution(sensorDeviceAddress, 12);
}
  
void loop(){
  
    /*
    temp = analogRead(TEMP_SENSOR)*(5000/1024);
    Serial.println(temp);
    temp = (temp - 500) * 10.0;
    Serial.println(temp);
    myservo.write(temp);
    */
    
  //float reading = analogRead(TEMP_SENSOR); 
  //Serial.println(convert(reading));

  sensors.requestTemperatures(); //Demande la température aux capteurs
 Serial.print("La température est: ");
 Serial.print(sensors.getTempCByIndex(0)); //Récupération de la température en celsius du capteur n°0
 Serial.println(" C°");
}
