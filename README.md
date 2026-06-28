# Arduino-Led-Toggle-Button
An Arduino project that demonstrates how to toggle an LED using a single push button. Each press changes the LED's state from ON to OFF or vice versa by implementing state management and edge detection.

---

## 📖 Overview

This project expands upon a basic push-button LED circuit by introducing toggle functionality. Instead of requiring the button to be held down, a single button press changes the LED's current state.

This project focuses on learning how embedded systems remember previous states and react only to new button presses.

---

## 🎯 Objectives

- Create a push-button controlled LED toggle.
- Learn how to detect button press events.
- Understand state management using boolean variables.
- Practice hardware and software debugging.

---

## 🛠 Components

- Arduino Uno R3
- Breadboard
- Push Button
- Red LED
- 220 Ω Resistor
- Jumper Wires

---

## 🔌 Wiring

| Arduino Pin | Connected To |
|-------------|--------------|
| Pin 8 | LED (through 220 Ω resistor) |
| GND | LED Cathode |
| Pin 2 | Push Button |
| GND | Opposite side of Push Button |

> The button uses Arduino's internal pull-up resistor (`INPUT_PULLUP`), so no external resistor is required.

---

## 💻 Arduino Code

```cpp
const int buttonPin = 2;
const int ledPin = 8;

bool ledState = false;
bool lastButtonState = HIGH;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  bool currentButtonState = digitalRead(buttonPin);

  if (lastButtonState == HIGH && currentButtonState == LOW) {

    ledState = !ledState;
    digitalWrite(ledPin, ledState);

  }

  lastButtonState = currentButtonState;
}
```

---

## 🧠 Concepts Learned

- Digital Input and Output
- Internal Pull-Up Resistors (`INPUT_PULLUP`)
- Boolean Variables
- State Management
- Edge Detection
- Conditional Statements
- Embedded Programming Fundamentals

---

## 🔍 Challenges & Debugging

During testing, the LED became dim instead of turning off.

After troubleshooting the circuit, I discovered that the breadboard was accidentally receiving power from both **Pin 13** and **Pin 8**. This created two current paths, preventing the LED from turning off completely.

Removing the Pin 13 connection resolved the issue.

This debugging experience reinforced the importance of tracing current paths and testing one change at a time.

---


## 📚 What I Learned

This project introduced one of the most important concepts in embedded systems: **state**.

Instead of directly responding to whether the button is being pressed, the Arduino remembers the LED's previous state and changes it only when a new button press is detected.

Additionally, debugging the hardware taught me the importance of understanding current flow and carefully analyzing circuit connections rather than relying on trial and error.

---

## 🚀 Future Improvements

- Software Debouncing
- Double Click Detection
- Long Press Detection
- Multiple LED Modes
- Menu Navigation with One Button

These features will be explored in future Arduino projects.

---
<img width="1200" height="1600" alt="WhatsApp Image 2026-06-28 at 21 31 19" src="https://github.com/user-attachments/assets/b2f2a614-9477-406e-9c75-5a38ae78d504" />
<img width="1600" height="1200" alt="WhatsApp Image 2026-06-28 at 15 05 42" src="https://github.com/user-attachments/assets/097a8be5-1e6b-4c7e-97f5-453fe34ad27f" />


https://github.com/user-attachments/assets/4b3a33e1-cd36-4f23-ae3c-40aa076cce9c

