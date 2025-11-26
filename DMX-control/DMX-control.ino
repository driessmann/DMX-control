

#include <ArduinoRS485.h> // the ArduinoDMX library depends on ArduinoRS485
#include <ArduinoDMX.h>

const int Max_channels = 16;

void setup() {
  // put your setup code here, to run once:
Serial.Begin(9600);
 while (!Serial);

  // initialize the DMX library with the maximum of controllable channels
  if (!DMX.begin(Max_channels)) {
    Serial.println("Failed to initialize DMX!");
    while (1); // wait for ever
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
