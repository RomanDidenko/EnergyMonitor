#include <PZEM004Tv30.h>

PZEM004Tv30 pzem(11, 12);

void setup() {
  Serial.begin(115200);
}

uint8_t addr = 0x01;

void loop() {
    /*pzem.setAddress(addr);*/
    pzem.setAddress(0x01);
    Serial.print("Current address:");
    Serial.println(pzem.getAddress());
    Serial.println();

    if(++addr == 0xF8)
        addr = 0x01;

    delay(1000);
}
