#include <Keypad.h>

//setting up our keyboard
const byte ROWS = 4; 
const byte COLS = 4; 
#define led1 10
#define led2 11
#define led3 12
#define led4 13
char hexaKeys[ROWS][COLS] = {
 {'D', 'C', 'B', 'A'},
 {'#', '9', '6', '3'},
 {'0', '8', '5', '2'},
 {'*', '7', '4', '1'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void resetLED(){
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW); 
}

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char customKey = customKeypad.getKey();
  Serial.println(customKey);

  switch(customKey){
    case '0':
      resetLED();
      break;
    case '1':
      resetLED();
      digitalWrite(led4,HIGH);
      break;
    case '2':
      resetLED();
      digitalWrite(led3,HIGH);
      break;
    case '3':
      resetLED();
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
      break;
    case '4':
      resetLED();
      digitalWrite(led2,HIGH);
      break;
    case '5':
      resetLED();
      digitalWrite(led2,HIGH);
      digitalWrite(led4,HIGH);
      delay(1000);
      break; 
    case '6':
      resetLED();
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      delay(1000);
      break;
    case '7':
      resetLED();
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
      delay(1000);
      break;
    case '8':
      resetLED();
      digitalWrite(led1,HIGH);
      delay(1000);
      break;
    case '9':
      resetLED();
      digitalWrite(led1,HIGH);
      digitalWrite(led4,HIGH);
      delay(1000);
      break;
    case 'A':
      resetLED();
      digitalWrite(led1,HIGH);
      digitalWrite(led3,HIGH);
      delay(1000);
      break;
    case 'B':
      resetLED();
      digitalWrite(led1,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
      delay(1000);
      break;
    case 'C':
      resetLED();
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      delay(1000);
      break;
    case 'D':
      resetLED();
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led4,HIGH);
      delay(1000);
      break;
    default:
      break;
  }
}
