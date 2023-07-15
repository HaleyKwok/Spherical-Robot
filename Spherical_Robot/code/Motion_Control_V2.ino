/*

V1 Version of program

*/
// FFE1
// clockwise and anticlockwise
#include <SoftwareSerial.h>
#define txPin 6 // blue -> you cannot put transmit to transmit, so we connect to RXD
#define rxPin 7 // green TXD 
// Set up a new SoftwareSerial object
SoftwareSerial mySerial =  SoftwareSerial(rxPin, txPin);

// led lights
#include <FastLED.h>
#define NUM_LEDS 12
#define DATA_PIN 8
CRGB leds[NUM_LEDS];

// the setup routine runs once when you press reset:
void setup() {
  // Define pin modes for TX and RX
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
    
  // Set the baud rate for the SoftwareSerial object
  mySerial.begin(9600);
  // send an intro:
  mySerial.println("Program is already to Run");
  mySerial.println();
    
  pinMode(11, OUTPUT); // counterclockwise of left wheel
  pinMode(10, OUTPUT); // clockwise of left wheel
  pinMode(9, OUTPUT); // clockwise of right wheel
  pinMode(3, OUTPUT); // counterclockwise of right wheel
  digitalWrite(13, LOW);  

  // led lights arrangement
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);

}

// the loop routine runs over and over again forever:
void loop() 
{
  // ******** Read serial input: ********
  while (mySerial.available() > 0)
  {
    int inChar = mySerial.read();
   // forward
   if (((char)inChar=='A')||((char)inChar=='a'))
    {
      analogWrite(11, 100); // cc left
      analogWrite(10, 0); // c left
      analogWrite(9, 100); // c right
      analogWrite(3, 0); // cc right

// CENTER IS 9
      leds[0] = CRGB::Green;
      leds[1] = CRGB::Green;
      leds[2] = CRGB::Green;
      leds[3] = CRGB::Green;
      leds[4] = CRGB::Green;
      leds[5] = CRGB::Green;
      leds[6] = CRGB::Green;
      leds[7] = CRGB::Green;
      leds[8] = CRGB::Green;
      leds[9] = CRGB::Green;
      leds[10] = CRGB::Green;
      leds[11] = CRGB::Green;
      FastLED.show();
//      delay(1500);
//      analogWrite(11, 0);
//      analogWrite(10, 0);
//      analogWrite(9, 0);
//      analogWrite(3, 0);
    }
    else if (((char)inChar=='L')||((char)inChar=='l')) // left then straight
    {
      analogWrite(11, 0); // cc left
      analogWrite(10, 66); // c left
      analogWrite(9, 100); // c right
      analogWrite(3, 0); // cc right
      
      leds[9] = CRGB::Red;
      leds[10] = CRGB::Red;
      leds[11] = CRGB::Red;
      leds[0] = CRGB::Red;
      leds[1] = CRGB::Red;
      leds[2] = CRGB::Red;
      leds[3] = CRGB::Green;
      leds[4] = CRGB::Green;
      leds[5] = CRGB::Green;
      leds[6] = CRGB::Green;
      leds[7] = CRGB::Green;
      leds[8] = CRGB::Green;
      FastLED.show();

      delay(1500);
      analogWrite(11, 100);
      analogWrite(10, 0);
      analogWrite(9, 100);
      analogWrite(3, 0);

      leds[0] = CRGB::Green;
      leds[1] = CRGB::Green;
      leds[2] = CRGB::Green;
      leds[3] = CRGB::Green;
      leds[4] = CRGB::Green;
      leds[5] = CRGB::Green;
      leds[6] = CRGB::Green;
      leds[7] = CRGB::Green;
      leds[8] = CRGB::Green;
      leds[9] = CRGB::Green;
      leds[10] = CRGB::Green;
      leds[11] = CRGB::Green;
      FastLED.show();
    }
    else if (((char)inChar=='R')||((char)inChar=='r')) // right then straight
    {
      analogWrite(11, 100);
      analogWrite(10, 0);
      analogWrite(9, 0);
      analogWrite(3, 66);

      leds[9] = CRGB::Green;
      leds[10] = CRGB::Green;
      leds[11] = CRGB::Green;
      leds[0] = CRGB::Green;
      leds[1] = CRGB::Green;
      leds[2] = CRGB::Green;
      leds[3] = CRGB::Red;
      leds[4] = CRGB::Red;
      leds[5] = CRGB::Red;
      leds[6] = CRGB::Red;
      leds[7] = CRGB::Red;
      leds[8] = CRGB::Red;
      FastLED.show();

      delay(1500);
      analogWrite(11, 100);
      analogWrite(10, 0);
      analogWrite(9, 100);
      analogWrite(3, 0);

      leds[0] = CRGB::Green;
      leds[1] = CRGB::Green;
      leds[2] = CRGB::Green;
      leds[3] = CRGB::Green;
      leds[4] = CRGB::Green;
      leds[5] = CRGB::Green;
      leds[6] = CRGB::Green;
      leds[7] = CRGB::Green;
      leds[8] = CRGB::Green;
      leds[9] = CRGB::Green;
      leds[10] = CRGB::Green;
      leds[11] = CRGB::Green;
      FastLED.show();


    }
    else if (((char)inChar=='B')||((char)inChar=='b'))
    {
      analogWrite(11, 0);
      analogWrite(10, 100);
      analogWrite(9, 0);
      analogWrite(3, 100);
      
      leds[0] = CRGB::Orange;
      leds[1] = CRGB::Orange;
      leds[2] = CRGB::Orange;
      leds[3] = CRGB::Orange;
      leds[4] = CRGB::Orange;
      leds[5] = CRGB::Orange;
      leds[6] = CRGB::Orange;
      leds[7] = CRGB::Orange;
      leds[8] = CRGB::Orange;
      leds[9] = CRGB::Orange;
      leds[10] = CRGB::Orange;
      leds[11] = CRGB::Orange;
      FastLED.show();
//      delay(1500);
//      analogWrite(11, 0);
//      analogWrite(10, 0);
//      analogWrite(9, 0);
//      analogWrite(3, 0);
    }  
    else if (((char)inChar=='S')||((char)inChar=='s'))
    {
      analogWrite(11, 0);
      analogWrite(10, 66);
      analogWrite(9, 100);
      analogWrite(3, 0);
      leds[0] = CRGB::Red;
      leds[1] = CRGB::Orange;
      leds[2] = CRGB::Yellow;
      leds[3] = CRGB::Green;
      leds[4] = CRGB::Lime;
      leds[5] = CRGB::Blue;
      leds[6] = CRGB::Indigo;
      leds[7] = CRGB::Purple;
      leds[8] = CRGB::DarkSalmon; 
      leds[9] = CRGB::Amethyst;
      leds[10] = CRGB::LightPink;
      leds[11] = CRGB::LightYellow;
      FastLED.show();
      delay(5000);
    } 
    else if (((char) inChar=='N')||((char)inChar=='n'))
    {
      analogWrite(11, 0);
      analogWrite(10, 0);
      analogWrite(9, 0);
      analogWrite(3, 0);

      leds[0] = CRGB::Red;
      leds[1] = CRGB::Red;
      leds[2] = CRGB::Red;
      leds[3] = CRGB::Red;
      leds[4] = CRGB::Red;
      leds[5] = CRGB::Red;
      leds[6] = CRGB::Red;
      leds[7] = CRGB::Red;
      leds[8] = CRGB::Red;
      leds[9] = CRGB::Red;
      leds[10] = CRGB::Red;
      leds[11] = CRGB::Red;
      FastLED.show();
    }
    else if (((char) inChar=='O')||((char)inChar=='o'))
    {
      leds[0] = CRGB::Black;
      leds[1] = CRGB::Black;
      leds[2] = CRGB::Black;
      leds[3] = CRGB::Black;
      leds[4] = CRGB::Black;
      leds[5] = CRGB::Black;
      leds[6] = CRGB::Black;
      leds[7] = CRGB::Black;
      leds[8] = CRGB::Black;
      leds[9] = CRGB::Black;
      leds[10] = CRGB::Black;
      leds[11] = CRGB::Black;
      FastLED.show();
    }
    else    {}
  }
}
