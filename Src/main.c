#include <stm32f407xx.h>

int main()
{
	RCC->AHB1ENR=1<<3;
	GPIOD->MODER=0x50000000;
	GPIOD->MODER= GPIOD->MODER|1<<28;
	GPIOD->MODER= GPIOD->MODER|1<<26;

	//ismim 6 kere//
	GPIOD->ODR|=1<<15;
	GPIOD->ODR=0;
		GPIOD->ODR|=1<<15;
		GPIOD->ODR=0;
	GPIOD->ODR|=1<<15;
	GPIOD->ODR=0;
		GPIOD->ODR|=1<<15;
		GPIOD->ODR=0;
	GPIOD->ODR|=1<<15;
	GPIOD->ODR=0;
	    GPIOD->ODR|=1<<15;
		GPIOD->ODR=0;

     //soyad 7 kere //
	GPIOD->ODR=1<<13;
	GPIOD->ODR=0;
		GPIOD->ODR=1<<13;
		GPIOD->ODR=0;
	GPIOD->ODR=1<<13;
	GPIOD->ODR=0;
		GPIOD->ODR=1<<13;
		GPIOD->ODR=0;
	GPIOD->ODR=1<<13;
    GPIOD->ODR=0;
		GPIOD->ODR=1<<13;
		GPIOD->ODR=0;
	GPIOD->ODR=1<<13;
	GPIOD->ODR=0;
}
