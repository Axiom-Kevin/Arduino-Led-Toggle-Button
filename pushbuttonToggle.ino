const int buttonPin = 2;
const int ledPin = 8;

bool ledState = false;
bool lastButtonState = HIGH;

void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  bool currentButtonState = digitalRead(buttonPin);

  // Detect a new button press
  if (lastButtonState == HIGH && currentButtonState == LOW) {

    ledState = !ledState;          // Flip ON/OFF
    digitalWrite(ledPin, ledState);

  }

  lastButtonState = currentButtonState;
}