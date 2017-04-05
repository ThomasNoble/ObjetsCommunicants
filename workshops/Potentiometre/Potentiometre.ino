const int entreeAnalogique = 0;
const int sortieAnalogique = 6;
int toto = 0;

void setup(){    
  pinMode(sortieAnalogique, OUTPUT);
  pinMode(entreeAnalogique, INPUT);
  Serial.begin(9600);
}
  
void loop(){// on met un rapport cyclique de 107/255 = 42 %
    Serial.println(toto);
    toto = analogRead(entreeAnalogique);
    toto = (toto*255)/1024;
    Serial.println(toto);
    //digitalWrite(sortieAnalogique,HIGH);
    //delay(1000);
    analogWrite(sortieAnalogique, toto);
    //delay(1000);
}
