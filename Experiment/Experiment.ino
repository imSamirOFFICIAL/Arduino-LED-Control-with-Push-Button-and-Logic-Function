#define LED 13
#define A 4
#define B 3
#define C 2

int aState = 0;
int bState = 0;
int cState = 0;

int result = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(A, INPUT_PULLUP);
  pinMode(B, INPUT_PULLUP);
  pinMode(C, INPUT_PULLUP);
}

void loop() {
  aState = digitalRead(A);
  bState = digitalRead(B);
  cState = digitalRead(C);
  
  result = (aState && bState) || cState;
  
  if (result == 1) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}