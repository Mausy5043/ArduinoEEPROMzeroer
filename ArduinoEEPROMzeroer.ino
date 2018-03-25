/* *****************************************************************************

                  Arduino EEPROM zeroer

(c) 2016, Maurice Hendrix  (mausy5043)
***************************************************************************** */

#include <EEPROM.h>

int addr = 0;
byte zero = 0;

void setup() {
  delay(1000);
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port...
  }

  Serial.println(F("==EEPROM zeroer=="));
  for (addr = 0; addr < EEPROM.length(); ++addr) {
    EEPROM.update(addr, zero);
  }
  Serial.print("Bytes written: ");
  Serial.println(addr);
  Serial.println(F("==READY=="));
}

void loop() {
  ; // no code here
}
