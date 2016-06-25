/*--------------------------
   Foo café
   Nightrider
   Advanced
   av Alrik He
  ---------------------------*/

//Serie kommunications hastighet.
const int BAUDRATE = 9600;

// ledn pin nummer.
// const int LED0 = 2, LED1 = 3, LED2 = 4, LED3 = 5, LED4 = 6, LED5 = 7;

const int TOTAL_LED = 6;
// array för pinnummer.
const int LED[TOTAL_LED] = {2, 3, 4, 5, 6, 7};

// Variabel för vilken led som ska lysa.

int lightup;

void setup() {
  //aktiverar pins för alla led.
  for (int i = 4; i < 7 ; i++) {
    pinMode(i, OUTPUT);
  }
  // aktiverar serie kommunication.
  Serial.begin(BAUDRATE);
}

void loop() {
  // släck gamla LED med variabeln
  digitalWrite(LED[lightup], LOW);
  
  //nästa led
  lightup = lightup + 1;

  // om variabel är för stor?
  if (lightup > TOTAL_LED) {
    // återställ variabel till 0.
    lightup = 0;
  }

  // slå på LED beroende på variabeln
  digitalWrite(LED[lightup], HIGH);

  // printar ut vilken LED som lyser till serie monitorn.
  Serial.print(lightup);

  // vänta i 500 millissekunder / 0.5 sekunder
  delay(500);
}
