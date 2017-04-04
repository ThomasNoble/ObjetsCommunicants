int ledPin = 2; 

void point(){
   digitalWrite(ledPin, HIGH);
   delay(500);
   digitalWrite(ledPin, LOW);
   delay(2000);
}

void tiret(){
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(2000);
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // initialisation de la communication
  Serial.println("Merci de ne rentrer que des lettres sans accent\n");
}

void loop() {

  char c;
  int i;
  
  while (Serial.available()) { // tant que des caractères sont en attente
  c = Serial.read();
  if(c>=97 && c<=122){
  }else{
    c+=32;
  }
    switch (c) {
      case 'a':
      point();
      tiret();
        break;
      case 'b':
      tiret();
      point();
      point();
      point();
        break;
        case 'c':
        tiret();
        point();
        tiret();
        point();
        break;
      case 'd':
        tiret();
        point();
        point();
        break;
      case 'e':
        point();
        break;
      case 'f':
        point();
        point();
        tiret();
        point();
        break;
        case 'g':
        tiret();
        tiret();
        point();
        break;
      case 'h':
        point();
        point();
        point();
        point();
        break;
        case 'i':
        point();
        point();
        break;
      case 'j':
        point();
        tiret();
        tiret();
        tiret();
        break;
        case 'k':
        tiret();
        point();
        tiret();
        break;
      case 'l':
        point();
        tiret();
        point();
        point();
        break;
        case 'm':
        tiret();
        tiret();
        break;
      case 'n':
        tiret();
        point();
        break;
        case 'o':
        tiret();
        tiret();
        tiret();
        break;
      case 'p':
        point();
        tiret();
        tiret();
        point();
        break;
        case 'q':
        tiret();
        tiret();
        point();
        tiret();
        break;
      case 'r':
        point();
        tiret();
        point();
        break;
        case 's':
        point();
        point();
        point();
        break;
      case 't':
        tiret();
        break;
        case 'u':
        point();
        point();
        tiret();
        break;
      case 'v':
        point();
        point();
        point();
        tiret();
        break;
        case 'w':
        point();
        tiret();
        tiret();
        break;
      case 'x':
        tiret();
        point();
        point();
        tiret();
        break;
        case 'y':
        tiret();
        point();
        tiret();
        tiret();
        break;
      case 'z':
        tiret();
        tiret(),
        point();
        point();
        break;
      default: 
        Serial.println("Erreur vous n'avez pas rentrer un letttre sans accent\n");
        delay(100);
      break;
    } 
  }
}
