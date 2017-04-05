#define number_of_74hc595s 1
#define numOfRegisterPins number_of_74hc595s * 8

#define SER_PIN 4
#define RCLK_PIN 5
#define SRCLK_PIN 6

#define BUTTON 2

long randNumber;

boolean registers[numOfRegisterPins];

void setup(){
  Serial.begin(9600);
  pinMode(SER_PIN, OUTPUT);
  pinMode(RCLK_PIN, OUTPUT);
  pinMode(SRCLK_PIN, OUTPUT);
  pinMode(BUTTON, INPUT);
  attachInterrupt(BUTTON, buttonClick, FALLING);
  //Reset tous les pins du 74HC595
  clearRegisters();
  writeRegisters();
}

//Place tous les pins du 74HC595 à l'état "OFF"
void clearRegisters(){
  for(int i = numOfRegisterPins - 1; i >= 0; i--){
    registers[i] = LOW;
  }
}

//Enregistrer et afficher les valeurs dans le registre
//Executer uniquement APRES que toutes les valeurs aient été programmées
void writeRegisters(){
  digitalWrite(RCLK_PIN, LOW);
  for(int i = numOfRegisterPins - 1; i >= 0; i--){
    digitalWrite(SRCLK_PIN, LOW);
    int val = registers[i];
    digitalWrite(SER_PIN, val);
    digitalWrite(SRCLK_PIN, HIGH);
  }
  digitalWrite(RCLK_PIN, HIGH);
}

//Place un pin du 74HC595 à l'état HAUT ou BAS
void setRegisterPin(int index, int value){
  registers[index] = value;
}

void buttonClick(){
  clearRegisters();
  writeRegisters();
  delay(100);
  randNumber = random(8);
  Serial.println(randNumber);
  setRegisterPin(randNumber, HIGH);
  writeRegisters();
}

void loop(){
  /*
  setRegisterPin(2, HIGH);
  setRegisterPin(3, HIGH);
  setRegisterPin(4, LOW);
  setRegisterPin(5, HIGH);
  setRegisterPin(7, HIGH);
  writeRegisters(); //Doit être exécuté pour appliquer les changements
  //Executer seulement une fois que toutes les valeurs ont été enregistrées comme vous le souhaitiez.
  */
}


