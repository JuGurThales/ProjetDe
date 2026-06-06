 #define SERIAL_BAUD 115200
 #define DE_FACES 6
 // TODO broches
 // #include <Adafruit_SSD1306.h> 
/*
Permettra de simuler un dé en choisissant un nombre aléatoire entre 1-6.
La génération est basée sur l'entropie crée par le bruit thermique dans 
le système et de l'inadéquation de l'horloge asynchrone. 
 */

uint32_t getEntropy(){
   //return esp_random();
   //bootloader_random_enable();
  return 0;  // provisoire pour compiler
}       
bool rollTriggered(){
  // TODO : 
  return 0;  // provisoire pour compiler
}               
int reduceToDie(uint32_t raw) {
  // TODO : 
  return 0;  // provisoire pour compiler
}     

void setup(){

}

void loop() {
  // 1. si rollTriggered() :
  //      uint32_t raw = getEntropy();
  //      int result = reduceToDie(raw);
  //      afficher result sur l'OLED
  // 2. sinon, attendre
}