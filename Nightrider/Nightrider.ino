const int LED[6] = {2, 3, 4, 5, 6, 7};
int lightup = 1;

void setup() {
  for (int i = 1; i < 9; i = i + 1) {
    pinMode( i, OUTPUT);
  }
}

void loop() {

  lightup = lightup + 1;
  digitalWrite(lightup, HIGH);
  delay(50);
  digitalWrite(lightup, LOW);
  if (lightup > 7) {
    lightup = 01 ;
  }




}
