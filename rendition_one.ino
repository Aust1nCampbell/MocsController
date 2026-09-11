#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

#define BUTTON_PIN 5

bool lastButtonState = HIGH;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  Keyboard.begin();
  USB.begin();
}

void loop() {
  bool buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW && lastButtonState == HIGH) {
    Keyboard.write('w');
  }

  lastButtonState = buttonState;

  delay(20);
}