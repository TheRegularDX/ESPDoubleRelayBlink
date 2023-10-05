# ESPDoubleRelayBlink
this is a simple example of how to use the ESP8266 double relay board from aliexpress with arduino firmware.

# Important bits
this is a serial relay module, which means that the relays aren't directly connected to the main ESP01 module, instead they are controlled by a built-in mcu that recieves serial commands.

First, serial begin (in this case im disabling the RX pin to use it as a regular GPIO pin for sensors or peripherals, which is sometimes not recommended)

```C++
Serial.begin(115200, SERIAL_8N1, SERIAL_TX_ONLY);
```


Then the relays, these are controlled via Serial.write();


Here is Relay0:
```C++
// Relay0 on
Serial.write(0xA0);
Serial.write(0x01);
Serial.write(0x01);
Serial.write(0xA2);
  
// Relay0 off
Serial.write(0xA0);
Serial.write(0x01);
Serial.write(0x00);
Serial.write(0xA1);
```


Here is Relay1:
```C++
// Relay1 on
Serial.write(0xA0);
Serial.write(0x02);
Serial.write(0x01);
Serial.write(0xA3);
  
// Relay1 off
Serial.write(0xA0);
Serial.write(0x02);
Serial.write(0x00);
Serial.write(0xA2);
```


![alt text](https://github.com/TheRegularDX/ESPDoubleRelayBlink/blob/master/relays.jpg)
