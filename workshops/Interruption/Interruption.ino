int PIN = 2;
int LED = 3;

volatile int state = HIGH;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN, INPUT);
    pinMode(LED, OUTPUT);
  attachInterrupt(PIN, interuption, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, state);
  delay(500);
}

void interuption(){
  if(state==HIGH){
    state = LOW;
  }else{
    state= HIGH;
  }
}
