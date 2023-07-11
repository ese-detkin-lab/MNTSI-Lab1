// Make sure to set the required values in "secrets.h"

#include "secrets.h"
#include <SPI.h>
#include <WiFiNINA.h>
#include <BlynkSimpleWiFiNINA.h>


const int ledPin = 2;

int val;

BlynkTimer timer;

BLYNK_WRITE(V0)
{
  val = param.asInt();        // fetch the switch value from the app
  Serial.println(val);        // Print the read value to the serial console
  digitalWrite(ledPin, val);  // Output the value to the LED
}

void setup()
{
  // Debug console
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}
