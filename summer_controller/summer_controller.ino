/*--------------------------
   Foo café
   Arduino controller
   Advanced
   av Alrik He
  ---------------------------*/
  
//Serie kommunications hastighet.
const int BAUDRATE = 9600;

// piezons pin nummer och ljudfrekvens.
const int HERTZ = 3100, PIEZO_PIN = 9;

// knapparnas pin nummer.
const int LEFT_BTN_PIN = 4, RIGHT_BTN_PIN = 5, UP_BTN_PIN = 6, DOWN_BTN_PIN = 7;

void setup() {
  //knappar i en D-pad format.
  pinMode(LEFT_BTN_PIN, INPUT_PULLUP);
  pinMode(RIGHT_BTN_PIN, INPUT_PULLUP);
  pinMode(UP_BTN_PIN, INPUT_PULLUP);
  pinMode(DOWN_BTN_PIN, INPUT_PULLUP);

  // högtalare
  pinMode(PIEZO_PIN, OUTPUT);

  // aktiverar serie kommunication.
  Serial.begin(BAUDRATE);
}

void loop() {
  // ifall någon knapp är tryckt så låter piezo högalaren.
  if (digitalRead(LEFT_BTN_PIN) == LOW || digitalRead(RIGHT_BTN_PIN) == LOW || digitalRead(UP_BTN_PIN) == LOW || digitalRead(DOWN_BTN_PIN) == LOW) {
    tone(PIEZO_PIN, HERTZ, 50);
  }

  // printar ut vilken knapp som är tryck till serie monitorn.
  
  if(digitalRead(LEFT_BTN_PIN)==0){
    Serial.write(0);
    delay(50);
    }
    
  if(digitalRead(RIGHT_BTN_PIN)==0){
    Serial.write(1);
    delay(50);
    }
    
  if(digitalRead(DOWN_BTN_PIN)==0){
    Serial.write(2);
    delay(50);
    }
    
  if(digitalRead(UP_BTN_PIN)==0){
    Serial.write(3);
    delay(50);
    }
  
 /* Serial.print(digitalRead(LEFT_BTN_PIN));
  Serial.print(digitalRead(RIGHT_BTN_PIN));
  Serial.print(digitalRead(UP_BTN_PIN));
  Serial.println(digitalRead(DOWN_BTN_PIN));*/
}
