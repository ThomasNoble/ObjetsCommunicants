#include <Servo.h>

Servo myservo;

int INTERRUPTEUR = 2;
int MOTEUR = 5;
bool pass = true;

int test = 90;

volatile int state = HIGH;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(INTERRUPTEUR, INPUT);
  //pinMode(MOTEUR, OUTPUT);
  myservo.attach(MOTEUR);
  myservo.write(90);
  attachInterrupt(INTERRUPTEUR, interuption, FALLING);
}

void loop() {
  if(pass)
  {
    myservo.write(test);
    pass = false;
    //delay(2000);
  }
}

void interuption(){
  test+=10;
  if(test>180)
  {
    test=0;
  }
  Serial.println(test);
  pass = true;
}
