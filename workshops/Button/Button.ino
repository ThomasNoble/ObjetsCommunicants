int PIN = 2;
int LED = 3;
int state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
  state = digitalRead(PIN);
}

void loop() {
  int local = digitalRead(PIN);
  Serial.println(local);
  if(local==0){
    if(state==0){
      digitalWrite(LED,HIGH);
      state = 1;
    }else{
      digitalWrite(LED,LOW);
      state = 0;
    }
  }
  delay(500);
}
