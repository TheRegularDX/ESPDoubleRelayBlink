// [DX] 
// Simple test for the double relay module for the ESP8266
// Blinks both relays

void setup() {
  // Remember to remove the RX jumper on the board, this enables the serial tx only so you get an extra pin for sensors or other peripherals
  Serial.begin(115200, SERIAL_8N1, SERIAL_TX_ONLY);

}

void loop() {

  // turn relay0 on
  Serial.write(0xA0);
  Serial.write(0x01);
  Serial.write(0x01);
  Serial.write(0xA2);
  delay(1000);

  // turn relay0 off
  Serial.write(0xA0);
  Serial.write(0x01);
  Serial.write(0x00);
  Serial.write(0xA1);
  delay(1000);

  // turn relay1 on
  Serial.write(0xA0);
  Serial.write(0x02);
  Serial.write(0x01);
  Serial.write(0xA3);
  delay(1000);

  // turn relay1 off
  Serial.write(0xA0);
  Serial.write(0x02);
  Serial.write(0x00);
  Serial.write(0xA2);
  delay(1000);  

}
