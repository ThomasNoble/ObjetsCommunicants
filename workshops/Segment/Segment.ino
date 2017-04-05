#define SEGMENT_A 3
#define SEGMENT_B 10
#define SEGMENT_C 6
#define SEGMENT_D 4
#define SEGMENT_E 5
#define SEGMENT_F 9
#define SEGMENT_G 8
#define SEGMENT_H 7 

#define BUTTON 2

int count  = 9;
bool state = false;

void setup() {
  Serial.begin(9600);
  pinMode(SEGMENT_A,OUTPUT);
  pinMode(SEGMENT_B,OUTPUT);
  pinMode(SEGMENT_C,OUTPUT);
  pinMode(SEGMENT_D,OUTPUT);
  pinMode(SEGMENT_E,OUTPUT);
  pinMode(SEGMENT_F,OUTPUT);
  pinMode(SEGMENT_G,OUTPUT);
  pinMode(SEGMENT_H,OUTPUT);
  pinMode(BUTTON, INPUT);
  attachInterrupt(BUTTON, buttonClick, FALLING);
}

void loop() {
  if(count<0){
    count=9;
  }
  switch(count){
    case 9:
    segmentNine();
    break;
    case 8:
    segmentEight();
    break;
    case 7:
    segmentSeven();
    break;
    case 6:
    segmentSix();
    break;
    case 5:
    segmentFive();
    break;
    case 4:
    segmentFour();
    break;
    case 3:
    segmentThree();
    break;
    case 2:
    segmentTwo();
    break;
    case 1:
    segmentOne();
    break;
    case 0:
    segmentZero();
    break;
  }
}

void buttonClick(){
  Serial.println("clicked");
  resetSegments();
  count--;
  Serial.println(count);
}

void segmentZero(){
  digitalWrite(SEGMENT_A,HIGH);
  digitalWrite(SEGMENT_B,HIGH);
  digitalWrite(SEGMENT_C,HIGH);
  digitalWrite(SEGMENT_D,HIGH);
  digitalWrite(SEGMENT_E,HIGH);
  digitalWrite(SEGMENT_F,HIGH);
  delay(500);
}

void segmentOne(){
  digitalWrite(SEGMENT_B,HIGH);
  digitalWrite(SEGMENT_C,HIGH);
    delay(500);
}

void segmentTwo(){
  digitalWrite(SEGMENT_A,HIGH);
  digitalWrite(SEGMENT_B,HIGH);
  digitalWrite(SEGMENT_G,HIGH);
  digitalWrite(SEGMENT_E,HIGH);
  digitalWrite(SEGMENT_D,HIGH);
    delay(500);
}

void segmentThree(){
  digitalWrite(SEGMENT_A,HIGH);
  digitalWrite(SEGMENT_B,HIGH);
  digitalWrite(SEGMENT_G,HIGH);
  digitalWrite(SEGMENT_C,HIGH);
  digitalWrite(SEGMENT_D,HIGH);
    delay(500);
}

void segmentFour(){
  digitalWrite(SEGMENT_F,HIGH);
  digitalWrite(SEGMENT_G,HIGH);
  digitalWrite(SEGMENT_B,HIGH);
  digitalWrite(SEGMENT_C,HIGH);
    delay(500);
}

void segmentFive(){
  digitalWrite(SEGMENT_A,HIGH);
  digitalWrite(SEGMENT_F,HIGH);
  digitalWrite(SEGMENT_G,HIGH);
  digitalWrite(SEGMENT_C,HIGH);
  digitalWrite(SEGMENT_D,HIGH);
    delay(500);
}

void segmentSix(){
  digitalWrite(SEGMENT_A,HIGH);
  digitalWrite(SEGMENT_F,HIGH);
  digitalWrite(SEGMENT_E,HIGH);
  digitalWrite(SEGMENT_D,HIGH);
  digitalWrite(SEGMENT_C,HIGH);
  digitalWrite(SEGMENT_G,HIGH);
    delay(500);
}

void segmentSeven(){
  digitalWrite(SEGMENT_A,HIGH);
  digitalWrite(SEGMENT_B,HIGH);
  digitalWrite(SEGMENT_C,HIGH);
    delay(500);
}

void segmentEight(){
  digitalWrite(SEGMENT_A,HIGH);
  digitalWrite(SEGMENT_B,HIGH);
  digitalWrite(SEGMENT_C,HIGH);
  digitalWrite(SEGMENT_D,HIGH);
  digitalWrite(SEGMENT_E,HIGH);
  digitalWrite(SEGMENT_F,HIGH);
  digitalWrite(SEGMENT_G,HIGH);
    delay(500);
}

void segmentNine(){
  digitalWrite(SEGMENT_A,HIGH);
  digitalWrite(SEGMENT_B,HIGH);
  digitalWrite(SEGMENT_C,HIGH);
  digitalWrite(SEGMENT_D,HIGH);
  digitalWrite(SEGMENT_F,HIGH);
  digitalWrite(SEGMENT_G,HIGH);
    delay(500);
}

void resetSegments(){
  digitalWrite(SEGMENT_A,LOW);
  digitalWrite(SEGMENT_B,LOW);
  digitalWrite(SEGMENT_C,LOW);
  digitalWrite(SEGMENT_D,LOW);
  digitalWrite(SEGMENT_E,LOW);
  digitalWrite(SEGMENT_F,LOW);
  digitalWrite(SEGMENT_G,LOW);
    delay(500);
}

