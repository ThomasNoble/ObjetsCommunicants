#define inter 2 //pull-up IN
#define button1 3 //pull-up IN
#define button2 4 //pull-up IN
#define button3 5 //pull-up IN
volatile unsigned long button_time = 0;
int debounce = 50; // debounce latency in ms
volatile int trigger = 0;
int total = 0;
int inta = 0;
int intb = 0;
int intc = 0;

void setup(){
  initPins(); 
  Serial.begin(9600);
  attachInterrupt(0, detect, FALLING);
}

void loop() {
  Serial.println(digitalRead(button1));
  Serial.println(digitalRead(button2));
  Serial.println(digitalRead(button3));
  if (trigger != 0){
    total++;
    if (trigger == 1) inta++;
    if (trigger == 2) intb++;
    if (trigger == 3) intc++;
    trigger = 0;
  }
  Serial.println("----------------------------------------");
  delay(1000);
}
void detect(){

  
  Serial.println("On est dans le detect");
  if(digitalRead(button1) == 0) trigger+=1;
  if(digitalRead(button2) == 0) trigger+=2;
  if(digitalRead(button3) == 0) trigger+=3;
  return;
}

// -----------------
void initPins(){
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(inter, INPUT);
  digitalWrite(button1, HIGH);
  digitalWrite(button2, HIGH);
  digitalWrite(button3, HIGH);
  digitalWrite(inter, HIGH);
}
