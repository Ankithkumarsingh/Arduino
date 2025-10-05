#include <LiquidCrystal.h>
#include <Keypad.h>

const byte rows = 4;
const byte cols = 4;
char hexaKeys[rows] [cols] =
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};
 
 byte rowPins[rows] = {6, 5, 4, 3};
byte colPins[cols] = {2, 0, 1, 13};
Keypad custompad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, 4, 4);
const int RS = 12, E = 11, D4 = 10, D5 = 9, D6 = 8, D7 = 7;
LiquidCrystal lcd(RS, E, D4, D5, D6, D7);


void setup() {
  // put your setup code here, to run once:
 lcd.begin(8,2);
 lcd.print("hello ankith");
 delay(2000);
 lcd.clear();
}

void loop() {
  char customKey = custompad.getKey();

  if (customKey != NO_KEY) {     // Only act when a key is pressed
    if (customKey == '0') {      // If the pressed key is '0'
      lcd.clear();
    } else {
      lcd.print(customKey);
    }
  }
}
