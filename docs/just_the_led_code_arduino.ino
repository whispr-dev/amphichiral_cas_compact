#include <LedControl.h>

// LED Matrix pin configuration
const int DIN_PIN = 12;  // Change these pins as needed
const int CLK_PIN = 11;
const int CS_PIN = 10;

LedControl display = LedControl(DIN_PIN, CLK_PIN, CS_PIN, 1);

// Define the image pattern
const uint8_t IMAGES[][8] = {{
  0b00000000,
  0b11100111,
  0b11100111,
  0b11100111,
  0b11100111,
  0b11100111,
  0b11100111,
  0b00000000
}};

const int IMAGES_LEN = sizeof(IMAGES)/8;

// Pin mapping for matrix
const int row[8] = {2, 7, 19, 5, 13, 18, 12, 16};
const int col[8] = {6, 11, 10, 3, 17, 4, 8, 9};

void setup() {
  display.shutdown(0, false);  // Wake up display
  display.setIntensity(0, 8); // Set medium brightness
  display.clearDisplay(0);     // Clear display
}

void displayImage(const byte* image) {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      display.setLed(0, i, j, bitRead(image[i], 7 - j));
    }
  }
}

void loop() {
  static int i = 0;
  
  displayImage(IMAGES[i]);
  if (++i >= IMAGES_LEN) {
    i = 0;
  }
  delay(333);
}