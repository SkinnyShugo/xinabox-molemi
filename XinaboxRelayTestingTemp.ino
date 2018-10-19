#include <xOC03.h>

#include <xCore.h>
#include <xOD01.h>
#include <xOC03.h>

xOC03 OC03;

const int DELAY_TIME = 2000;

void  setup(){
  
  Serial.begin(115200);
  Wire.begin(2,14);
  OLED.begin();
  OC03.begin();
  Wire.begin();

  Serial.println("OC03 Test");
  OD01.set1X();
  OD01.println("Relay");
  OD01.println(Serial.println());
}


void  loop(){

  OC03.write(HIGH);
  delay(DELAY_TIME);

  OC03.write(LOW);
  delay(DELAY_TIME);
}

