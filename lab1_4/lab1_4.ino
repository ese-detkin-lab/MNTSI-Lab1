void setup() {
  Serial.begin(9600);  // open the serial port
  while (!Serial) {
    ; // wait for serial monitor to open.
  }
}

void loop() {
  Serial.println(analogRead(A0));
  delay(100);
  // we echo on the serial port the value read on the analog pin
}
