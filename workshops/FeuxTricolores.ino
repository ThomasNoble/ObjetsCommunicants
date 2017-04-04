int PIN_GREEN_2 = 7;
int PIN_ORANGE_2 = 6;
int PIN_RED_2 = 5;
int PIN_GREEN_1 = 4;
int PIN_ORANGE_1 = 3;
int PIN_RED_1 = 2;

int count = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  
  pinMode(PIN_GREEN_1,OUTPUT);
  pinMode(PIN_GREEN_2,OUTPUT);
  pinMode(PIN_ORANGE_1,OUTPUT);
  pinMode(PIN_ORANGE_2,OUTPUT);
  pinMode(PIN_RED_1,OUTPUT);
  pinMode(PIN_RED_2,OUTPUT);
}

void loop() {
  
  digitalWrite(PIN_GREEN_2, HIGH);
  digitalWrite(PIN_RED_1,HIGH);

  delay(2000);
  digitalWrite(PIN_GREEN_2, LOW);
  digitalWrite(PIN_ORANGE_2, HIGH);

  delay(1000);
  digitalWrite(PIN_ORANGE_2, LOW);
  digitalWrite(PIN_RED_2, HIGH);
  digitalWrite(PIN_RED_1, LOW);
  digitalWrite(PIN_GREEN_1, HIGH);

  delay(2000);

  digitalWrite(PIN_GREEN_1, LOW);
  digitalWrite(PIN_ORANGE_1, HIGH);

  delay(1000);

  digitalWrite(PIN_ORANGE_1,LOW);
  digitalWrite(PIN_RED_2,LOW);

}
