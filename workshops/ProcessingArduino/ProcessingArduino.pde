/* prog1_allumeD13.pde */
import processing.serial.*;
import cc.arduino.*;
Arduino arduino;
boolean test = true;
int ledPin = 12;
int buttonPin = 2;
void setup()
{
  arduino = new Arduino(this, Arduino.list()[1], 57600);
  arduino.pinMode(12, Arduino.OUTPUT);
  arduino.pinMode(2, Arduino.INPUT);
  // affiche la liste des arduino pour trouve le bon
  println(Arduino.list());
}

void draw()
{
  if(arduino.digitalRead(buttonPin) == Arduino.LOW){
    test = !test;
    if(test){
      arduino.digitalWrite(ledPin, Arduino.HIGH);
    }else{
      arduino.digitalWrite(ledPin, Arduino.LOW);
    }
  }
  println(arduino.digitalRead(buttonPin));
  delay(1000);
}