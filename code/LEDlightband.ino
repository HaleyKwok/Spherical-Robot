/*

V1 Version of program

*/
#include <SoftwareSerial.h>
#define txPin 6
#define rxPin 7
// Set up a new SoftwareSerial object
SoftwareSerial mySerial =  SoftwareSerial(rxPin, txPin);

#include "FastLED.h"            /// This sample program needs to use the FastLED library
 
#define NUM_LEDS 40 // Number of LED beads
#define DATA_PIN 5 // Arduino output control signal pins
#define LED_TYPE WS2812 // LED strip model
#define COLOR_ORDER GRB // The order of red, green and blue LEDs in RGB beads


#define twinkleInterval 100 // time between blinks (milliseconds)
#define twinkleChance 80 // number of blinks, the larger the value the more blinks (0-255) 

 
uint8_t max_bright = 128; // LED brightness control variable, can use the value of 0 ~ 255, the greater the value of the higher the brightness of the light band
 
CRGB leds[NUM_LEDS]; // establish the light band leds

uint8_t beginHue = 0.
uint8_t deltaHue = 1;



// the setup routine runs once when you press reset:
void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

  pinMode(5,OUTPUT);//LED


 
 
  LEDS.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);  // Initialize LED band
  FastLED.setBrightness(max_bright);                            // Set the light band brightness


 Serial.begin(9600);           // Start serial communication
  delay(1000);                  // Stability Waiting

   
  // Define pin modes for TX and RX
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
    
  // Set the baud rate for the SoftwareSerial object
  mySerial.begin(9600);
  // send an intro:
  mySerial.println("Program is already to Run");
  mySerial.println();
    
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);  


}

// the loop routine runs over and over again forever:
void loop() 
{
  // ******** Read serial input: ********
  while (mySerial.available() > 0)
  {
    int inChar = mySerial.read();
   if (((char)inChar=='A')||((char)inChar=='a'))
    {
      //forward
      digitalWrite(13,HIGH);
       analogWrite(9,0);          //motor 1 turn CCW
       analogWrite(3,100);
       
       analogWrite(10,0);          //motor 2 turn CW
       analogWrite(11,100);
       
       delay(1000);

    }
    else if (((char)inChar=='B')||((char)inChar=='b'))
    {
      //stop
      analogWrite(9,0);          //motor 1 
       analogWrite(3,0);
       
       analogWrite(10,0);          //motor 2 
       analogWrite(11,0);

       delay(1000);
    }


    else if (((char)inChar=='C')||((char)inChar=='c'))
    {
      //backward
      analogWrite(9,100);          //motor 1 turn CW
       analogWrite(3,0);
       
       analogWrite(10,100);          //motor 2 turn CCW
       analogWrite(11,0);

       delay(1000);
    }

 else if (((char)inChar=='D')||((char)inChar=='d'))
    {
      //self-spin
      analogWrite(9,100);          //motor 1 turn CW
       analogWrite(3,0);
       
       analogWrite(10,0);          //motor 2 turn CCW
       analogWrite(11,100);

       delay(1000);
    }


    else if (((char)inChar=='E')||((char)inChar=='e'))
    {
      //right
      analogWrite(9,0);          //motor 1 turn CW
       analogWrite(3,100);
       
       analogWrite(10,0);          //motor 2 turn CCW
       analogWrite(11,80);

       delay(1000);
    }


    else if (((char)inChar=='F')||((char)inChar=='f'))
    {
      //left
      analogWrite(9,0);          //motor 1 turn CW
       analogWrite(3,80);
       
       analogWrite(10,0);          //motor 2 turn CCW
       analogWrite(11,100);

       delay(1000);
    }

     else if (((char)inChar=='G')||((char)inChar=='g'))
    {
     leds[0] = CRGB::LightPink;          // Set the color of the first light bead in the strip to red, leds[0] for the first light bead, leds[1] for the second light bead
     leds[1] = CRGB::LightPink;
     leds[2] = CRGB::LightPink;
     leds[3] = CRGB::LightPink;
     leds[4] = CRGB::LightPink;
     leds[5] = CRGB::LightPink;
     leds[6] = CRGB::LightPink;
     leds[7] = CRGB::LightPink;
     leds[8] = CRGB::AliceBlue;
     leds[9] = CRGB::AliceBlue;
     leds[10] = CRGB::AliceBlue;
     leds[11] = CRGB::AliceBlue;
     leds[12] = CRGB::AliceBlue;
     leds[13] = CRGB::AliceBlue;
     leds[14] = CRGB::AliceBlue;
     leds[15] = CRGB::SeaGreen;
     leds[16] = CRGB::SeaGreen;
     leds[17] = CRGB::SeaGreen;
     leds[18] = CRGB::SeaGreen;
     leds[19] = CRGB::SeaGreen;
     leds[20] = CRGB::SeaGreen;
     leds[21] = CRGB::SeaGreen;
     leds[22] = CRGB::SeaGreen;
     leds[23] = CRGB::SeaGreen;
     leds[24] = CRGB::SeaGreen;
     leds[25] = CRGB::PaleGreen;
     leds[26] = CRGB::PaleGreen;
     leds[27] = CRGB::PaleGreen;
     leds[28] = CRGB::PaleGreen;
     leds[29] = CRGB::PowderBlue;
     leds[30] = CRGB::PowderBlue;
     leds[31] = CRGB::PowderBlue;
     leds[32] = CRGB::PowderBlue;
     leds[33] = CRGB::PowderBlue;
     leds[34] = CRGB::PowderBlue;
     leds[35] = CRGB::PowderBlue;
     leds[36] = CRGB::PeachPuff;
     leds[37] = CRGB::PeachPuff;
     leds[38] = CRGB::PeachPuff;
     leds[39] = CRGB::PeachPuff;
     leds[40] = CRGB::PeachPuff;
     
     FastLED.show();                // Update LED color
     delay(1500);
      
    }

    else if (((char)inChar=='H')||((char)inChar=='h'))
    {
  fill_rainbow(leds, NUM_LEDS, beginHue, deltaHue); 
  FastLED.show();
  delay(25);

    }


 else if (((char)inChar=='I')||((char)inChar=='i'))
    {
     leds[0] = CRGB::Black;          // Set the color of the first LED in the light strip to red, leds[0] for the first LED, leds[1] for the second LED
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
     leds[12] = CRGB::Black;
     leds[13] = CRGB::Black;
     leds[14] = CRGB::Black;
     leds[15] = CRGB::Black;
     leds[16] = CRGB::Black;
     leds[17] = CRGB::Black;
     leds[18] = CRGB::Black;
     leds[19] = CRGB::Black;
     leds[20] = CRGB::Black;
     leds[21] = CRGB::Black;
     leds[22] = CRGB::Black;
     leds[23] = CRGB::Black;
     leds[24] = CRGB::Black;
     leds[25] = CRGB::Black;
     leds[26] = CRGB::Black;
     leds[27] = CRGB::Black;
     leds[28] = CRGB::Black;
     leds[29] = CRGB::Black;
     leds[30] = CRGB::Black;
     leds[31] = CRGB::Black;
     leds[32] = CRGB::Black;
     leds[33] = CRGB::Black;
     leds[34] = CRGB::Black;
     leds[35] = CRGB::Black;
     leds[36] = CRGB::Black;
     leds[37] = CRGB::Black;
     leds[38] = CRGB::Black;
     leds[39] = CRGB::Black;
     leds[40] = CRGB::Black;
     
     FastLED.show();                // Update LED color
     delay(1500);
  }
    
    else
    {
    digitalWrite(13,HIGH);
    delay(500);
    
    digitalWrite(13,LOW);
    delay(500);

    }
  }
}
