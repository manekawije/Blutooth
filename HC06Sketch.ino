// Bluetooth Sketch for The HC-06_01
// github.com/alphaanywhere/bluetoothExample
//
// 
 
// Load the Software Serial Library
#include <SoftwareSerial.h>
SoftwareSerial BTserial(2, 3); // RX | TX
// Connect the HC-06 TX to the Arduino RX on pin 2. 
// Connect the HC-06 RX to the Arduino TX on pin 3 
// 
 
 
void setup() 
{
    Serial.begin(9600);
    
}
 
void loop()
{
 
if (Serial.available())
    {
        Serial.write(Serial.read());
    }


   
 
}
