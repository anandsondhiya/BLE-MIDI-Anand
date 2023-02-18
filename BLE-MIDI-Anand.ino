#include <Arduino.h>
#include <BLEMidi.h>

int ButtonValue1 = 0;
int ButtonValue2 = 0;
int ButtonValue3 = 0;
int ButtonValue4 = 0;
int ButtonValue5 = 0;

//button input pin in ESP32 (define more int button2,3,4... ect for multiple inputs)
int button1 = 13; //Note 1
int button2 = 12; //Note 2
int button3 = 14; //Note 3
int button4 = 27; //Note 4
int button5 = 26; //Note 5



void setup() {
  Serial.begin(115200);
  Serial.println("Initializing bluetooth");
  BLEMidiServer.begin("BLE MIDI device Anand");
  Serial.println("Waiting for connections...");

  pinMode(button1,INPUT_PULLUP);
  pinMode(button2,INPUT_PULLUP);
  pinMode(button3,INPUT_PULLUP);
  pinMode(button4,INPUT_PULLUP);
  pinMode(button5,INPUT_PULLUP);
}

void loop() {

  ButtonValue1 = digitalRead(button1);
  ButtonValue2 = digitalRead(button2);
  ButtonValue3 = digitalRead(button3);
  ButtonValue4 = digitalRead(button4);
  ButtonValue5 = digitalRead(button5);

static bool buttonAvalueOld = LOW;

bool buttonAvalueNew = digitalRead(button1);

if (buttonAvalueNew != buttonAvalueOld){
      if (buttonAvalueNew == HIGH){
      BLEMidiServer.noteOn(0, 69, 127);
      //Serial.println("Note On");
      }
      else {
      BLEMidiServer.noteOff(0, 69, 127);
      //Serial.println("Note Off");
      }
      buttonAvalueOld = buttonAvalueNew;
}
  

static bool buttonBvalueOld = LOW;

bool buttonBvalueNew = digitalRead(button2);

if (buttonBvalueNew != buttonBvalueOld){
      if (buttonBvalueNew == HIGH){
      BLEMidiServer.noteOn(0, 70, 127);
      //Serial.println("Note On");
      }
      else {
      BLEMidiServer.noteOff(0, 70, 127);
      //Serial.println("Note Off");
      }
      buttonBvalueOld = buttonBvalueNew;
}
}
