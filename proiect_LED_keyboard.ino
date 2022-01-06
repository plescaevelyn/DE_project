#include <Keypad.h>

//setting up our keyboard
const byte ROWS = 4; 
const byte COLS = 4; 

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
  PORTB &= ~(1 << 5);
  PORTB &= ~(1 << 4);
  PORTB &= ~(1 << 3);
  PORTB &= ~(1 << 2);
}

void setup(){
  DDRB |= 1 << 5;
  DDRB |= 1 << 4;
  DDRB |= 1 << 3;
  DDRB |= 1 << 2;
}
  
void loop(){
  char customKey = customKeypad.getKey();

  switch(customKey){
    case '0':
      resetLED();
      break;
    case '1':
      resetLED();
      PORTB |= 1 << 5;
      _delay_ms(1000);
      break;
    case '2':
      resetLED();
      PORTB |= 1 << 4;
      _delay_ms(1000);
      break;
    case '3':
      resetLED();
      PORTB |= 1 << 4;
      PORTB |= 1 << 5;
      _delay_ms(1000);
      break;
    case '4':
      resetLED();
      PORTB |= 1 << 3;
      _delay_ms(1000);
      break;
    case '5':
      resetLED();
      PORTB |= 1 << 3;
      PORTB |= 1 << 5;
      _delay_ms(1000);
      break; 
    case '6':
      resetLED();
      PORTB |= 1 << 3;
      PORTB |= 1 << 4;
      _delay_ms(1000);
      break;
    case '7':
      resetLED();
      PORTB |= 1 << 3;
      PORTB |= 1 << 4;
      PORTB |= 1 << 5;
      _delay_ms(1000);
      break;
    case '8':
      resetLED();
      PORTB |= 1 << 2;
      _delay_ms(1000);
      break;
    case '9':
      resetLED();
      PORTB |= 1 << 2;
      PORTB |= 1 << 5;
      _delay_ms(1000);
      break;
    case 'A':
      resetLED();
      PORTB |= 1 << 2;
      PORTB |= 1 << 4;
      _delay_ms(1000);
      break;
    case 'B':
      resetLED();
      PORTB |= 1 << 2;
      PORTB |= 1 << 4;
      PORTB |= 1 << 5;
      _delay_ms(1000);
      break;
    case 'C':
      resetLED();
      PORTB |= 1 << 2;
      PORTB |= 1 << 3;
      _delay_ms(1000);
      break;
    case 'D':
      resetLED();
      PORTB |= 1 << 2;
      PORTB |= 1 << 3;
      PORTB |= 1 << 5;
      _delay_ms(1000);
      break;
    default:
      break;
  }
}
