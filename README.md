# MocsController

This project is a custom game controller built around an ESP32-S3. I am starting with basic button inputs and USB HID testing, then I plan to expand it into a full wireless controller with joysticks, additional buttons, and other features.

## Current Features

- ESP32-S3 microcontroller
- Physical push button input
- Digital input using `INPUT_PULLUP`
- USB HID keyboard output
- Onboard RGB LED used for testing
- Button currently mapped to keyboard input for testing

## Current Wiring

### Push Button

The push button is connected between:

- GPIO 5
- GND

The ESP32 uses its internal pull-up resistor:

```cpp
pinMode(BUTTON_PIN, INPUT_PULLUP);
