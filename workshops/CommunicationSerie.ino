unsigned long timestamp;

void setup()
{
  timestamp = millis();
  Serial.begin(9600);
  Serial.println(timestamp);
}

void loop()
{  
  if ( Serial.available() ) {
    timestamp = millis();
    Serial.println(timestamp);
    Serial.flush();
  }
  
}
