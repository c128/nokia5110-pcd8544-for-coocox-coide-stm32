//pcd8544/nokia5110 test
#include "main.h"



//counts 1ms timeTicks
volatile uint32_t msTicks=1000;

int main(void) {
    HAL_Init();
    SystemClock_Config();

    PCD8544Init();

  while(1) {

    ClearDisplayBuffer(); //erase
    BigNumber(msTicks); //draw
    PCD8544Update();      //display
    HAL_Delay(1000);
  }
}
