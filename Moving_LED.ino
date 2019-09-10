
// Configured for Arduino Due
// Configured for LPD8806 LED strip from Adafruit
// Sketch Modifications by TomJ

// Include FastLED Library
#include <FastLED.h>

// How many LEDs in your strip?
#define NUM_LEDS 32

// LPD8806 LED chipsets are SPI based (four wires - data, clock,
// ground, and power), need to define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 3
#define CLOCK_PIN 13

//Correct LPD8806 for Color Order
#define COLOR_ORDER GRB

// Define the array of LEDs
CRGB leds[NUM_LEDS];

void setup() { 
      // LPD8806 LEDs arrangement.    
      FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, COLOR_ORDER>(leds, NUM_LEDS);
}

void loop() {
        for(int dot = 0; dot < NUM_LEDS; dot++) { 
            leds[dot] = CRGB::Navy;
            FastLED.show();
            // clear this led for the next time around the loop
            leds[dot] = CRGB::Black;
            delay(500);
        }
    }
