#include <Servo.h>

Servo myservo;

const int POTENTIOMETRE = 0;
int MOTEUR = 5;

int vdegrees = 90;

void setup(){    
  pinMode(POTENTIOMETRE, INPUT);
  Serial.begin(9600);
  myservo.attach(MOTEUR);
  myservo.write(vdegrees);
}
  
void loop(){
    vdegrees = analogRead(POTENTIOMETRE);
    vdegrees = (vdegrees*180)/1024;
    Serial.println(vdegrees);
    myservo.write(vdegrees);
}

