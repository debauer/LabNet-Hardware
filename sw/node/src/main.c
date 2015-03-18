/*
**
**                           Main.c
**
**
**********************************************************************/
/*
   Last committed:     $Revision: 00 $
   Last changed by:    $Author: $
   Last changed date:  $Date:  $
   ID:                 $Id:  $

**********************************************************************/
#include "stm32f0xx_conf.h"

void delay(uint32_t s){
    uint32_t d;
    for(d=0;d<s;d++);
}

int main(void)
{
    RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA, ENABLE);

    GPIO_InitTypeDef GPIOA_InitStructure;
    GPIOA_InitStructure.GPIO_Mode = GPIO_Mode_OUT;     //Als Ausgang
    GPIOA_InitStructure.GPIO_OType = GPIO_OType_PP;    //Push-Pull Betrieb
    GPIOA_InitStructure.GPIO_Pin = GPIO_Pin_4;        //Pin 15 (STM32F4-Discovery: Blaue LED)
    GPIOA_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;  //Kein Pull-Up oder Pull-Down Widerstand aktiviert
    GPIOA_InitStructure.GPIO_Speed = GPIO_Speed_10MHz; //25MHz Update-Rate
    GPIO_Init(GPIOA, &GPIOA_InitStructure);

    GPIOA_InitStructure.GPIO_Pin = GPIO_Pin_3;
    GPIO_Init(GPIOA, &GPIOA_InitStructure);

    GPIOA_InitStructure.GPIO_Pin = GPIO_Pin_5;
    GPIO_Init(GPIOA, &GPIOA_InitStructure);
    GPIO_SetBits(GPIOA, GPIO_Pin_3);
    GPIO_SetBits(GPIOA, GPIO_Pin_4);
    GPIO_SetBits(GPIOA, GPIO_Pin_5);
  while(1)
  {
    GPIO_ResetBits(GPIOA, GPIO_Pin_4);
    delay(1000000);
    GPIO_SetBits(GPIOA, GPIO_Pin_4);
    delay(1000000);
  }
}
