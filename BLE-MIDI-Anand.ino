#include <Arduino.h>
#include <BLEMidi.h>

int ButtonValue1 = 0;
int ButtonValue2 = 0;
int ButtonValue3 = 0;
int ButtonValue4 = 0;
int ButtonValue5 = 0;
int ButtonValue6 = 0;
int ButtonValue7 = 0;
int ButtonValue8 = 0;



//button input pin in ESP32 (define more int button2,3,4... ect for multiple inputs)
int button1 = 13; //Note 1 - MIDI note 69 "A2"
int button2 = 12; //Note 2 - MIDI note 70 "A#2"
int button3 = 14; //Note 3 - MIDI note 71 "B2"
int button4 = 27; //Note 4 - MIDI note 72 "C2"
int button5 = 26; //Note 5 - MIDI note 73 "C#2"
int button6 = 15;
int button7 = 2;
int button8 = 4;



void setup() {
  Serial.begin(115200);
  Serial.println("Initializing bluetooth");
  BLEMidiServer.begin("BLEMIDI 4");
  Serial.println("Waiting for connections...");

  pinMode(button1,INPUT_PULLUP);
  pinMode(button2,INPUT_PULLUP);
  pinMode(button3,INPUT_PULLUP);
  pinMode(button4,INPUT_PULLUP);
  pinMode(button5,INPUT_PULLUP);
  pinMode(button6,INPUT_PULLUP);
  pinMode(button7,INPUT_PULLUP);
  pinMode(button8,INPUT_PULLUP);
}

void loop() {

  ButtonValue1 = digitalRead(button1);
  ButtonValue2 = digitalRead(button2);
  ButtonValue3 = digitalRead(button3);
  ButtonValue4 = digitalRead(button4);
  ButtonValue5 = digitalRead(button5);
  ButtonValue6 = digitalRead(button6);
  ButtonValue7 = digitalRead(button7);
  ButtonValue8 = digitalRead(button8);

static bool buttonAvalueOld = LOW;

bool buttonAvalueNew = digitalRead(button1);

if (buttonAvalueNew != buttonAvalueOld){
      if (buttonAvalueNew == HIGH){
      BLEMidiServer.noteOn(0, 69, 127);
//      Serial.println("Note 1 On");
      }
      else {
      BLEMidiServer.noteOff(0, 69, 127);
//      Serial.println("Note 1 Off");
      }
      buttonAvalueOld = buttonAvalueNew;
      delay(10);
}
  

static bool buttonBvalueOld = LOW;

bool buttonBvalueNew = digitalRead(button2);

if (buttonBvalueNew != buttonBvalueOld){
      if (buttonBvalueNew == HIGH){
      BLEMidiServer.noteOn(0, 70, 127);
      //Serial.println("Note 2 On");
      }
      else {
      BLEMidiServer.noteOff(0, 70, 127);
      //Serial.println("Note 2 Off");
      }
      buttonBvalueOld = buttonBvalueNew;
      delay(10);
}


static bool buttonCvalueOld = LOW;

bool buttonCvalueNew = digitalRead(button3);

if (buttonCvalueNew != buttonCvalueOld){
      if (buttonCvalueNew == HIGH){
      BLEMidiServer.noteOn(0, 71, 127);
      //Serial.println("Note 3 On");
      }
      else {
      BLEMidiServer.noteOff(0, 71, 127);
      //Serial.println("Note 3 Off");
      }
      buttonCvalueOld = buttonCvalueNew;
      delay(10);
}

static bool buttonDvalueOld = LOW;

bool buttonDvalueNew = digitalRead(button4);

if (buttonDvalueNew != buttonDvalueOld){
      if (buttonDvalueNew == HIGH){
      BLEMidiServer.noteOn(0, 72, 127);
      //Serial.println("Note 4 On");
      }
      else {
      BLEMidiServer.noteOff(0, 73, 127);
      //Serial.println("Note 4 Off");
      }
      buttonDvalueOld = buttonDvalueNew;
      delay(10);
}


static bool buttonEvalueOld = LOW;

bool buttonEvalueNew = digitalRead(button4);

if (buttonEvalueNew != buttonEvalueOld){
      if (buttonEvalueNew == HIGH){
      BLEMidiServer.noteOn(0, 73, 127);
      //Serial.println("Note 5 On");
      }
      else {
      BLEMidiServer.noteOff(0, 73, 127);
      //Serial.println("Note 5 Off");
      }
      buttonEvalueOld = buttonEvalueNew;
      delay(10);
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 3 New Buttons



//static bool buttonFvalueOld = LOW;
//
//bool buttonFvalueNew = digitalRead(button4);
//
//if (buttonFvalueNew != buttonFvalueOld){
//      if (buttonFvalueNew == HIGH){
//      BLEMidiServer.noteOn(0, 74, 127);
//      //Serial.println("Note 5 On");
//      }
//      else {
//      BLEMidiServer.noteOff(0, 74, 127);
//      //Serial.println("Note 5 Off");
//      }
//      buttonFvalueOld = buttonFvalueNew;
//      delay(10);
//}
//
//static bool buttonGvalueOld = LOW;
//
//bool buttonGvalueNew = digitalRead(button4);
//
//if (buttonGvalueNew != buttonGvalueOld){
//      if (buttonGvalueNew == HIGH){
//      BLEMidiServer.noteOn(0, 75, 127);
//      //Serial.println("Note 5 On");
//      }
//      else {
//      BLEMidiServer.noteOff(0, 75, 127);
//      //Serial.println("Note 5 Off");
//      }
//      buttonGvalueOld = buttonGvalueNew;
//      delay(10);
//}
//
//
//
//static bool buttonHvalueOld = LOW;
//
//bool buttonHvalueNew = digitalRead(button4);
//
//if (buttonHvalueNew != buttonHvalueOld){
//      if (buttonHvalueNew == HIGH){
//      BLEMidiServer.noteOn(0, 76, 127);
//      //Serial.println("Note 5 On");
//      }
//      else {
//      BLEMidiServer.noteOff(0, 76, 127);
//      //Serial.println("Note 5 Off");
//      }
//      buttonHvalueOld = buttonHvalueNew;
//      delay(10);
//}

/////////////////////////////////////////////////////////////////////////////////////////////

}
