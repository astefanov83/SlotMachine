int DIGITAL_PIN_1 = 1;
int DIGITAL_PIN_2 = 2;
int DIGITAL_PIN_3 = 3;
int DIGITAL_PIN_BUTTON = 4;

// the setup routine runs once when you press reset:
void setup() {
  pinMode(DIGITAL_PIN_1, INPUT);
  pinMode(DIGITAL_PIN_2, INPUT);
  pinMode(DIGITAL_PIN_3, INPUT);
  pinMode(DIGITAL_PIN_BUTTON, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  if (digitalRead(DIGITAL_PIN_BUTTON) = "LOW") {

    if (digitalRead(DIGITAL_PIN_1) = "HIGH") {
      pinMode(DIGITAL_PIN_1, OUTPUT)
      digitalWrite(DIGITAL_PIN_1, HIGH)
    }

    if (digitalRead(DIGITAL_PIN_2) = "HIGH") {
      pinMode(DIGITAL_PIN_2, OUTPUT)
      digitalWrite(DIGITAL_PIN_2, HIGH)
    }

    if (digitalRead(DIGITAL_PIN_3) = "HIGH") {
      pinMode(DIGITAL_PIN_3, OUTPUT)
      digitalWrite(DIGITAL_PIN_3, HIGH)
    }
  }
}