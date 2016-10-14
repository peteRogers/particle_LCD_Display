#include "LiquidCrystal_I2C_Spark.h"

LiquidCrystal_I2C *lcd;

int lastSecond = 0;





void setup(){

 Particle.function("followers", followers);
 Serial.begin(9600);


 lcd = new LiquidCrystal_I2C(0x27, 20, 4);
 lcd->init();
 lcd->backlight();
 lcd->clear();
 lcd->print(" ***Spark Time***");
}

void loop(){



}

int followers(String command){
  Serial.println(command);
  lcd->print(command);
  return 1;
}
