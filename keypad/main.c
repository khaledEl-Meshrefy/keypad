/*
* keypad.c
*
* Created: 02/10/2020 10:49:49 PM
* Author : Khalid El Meshrefy
*/	

#include <stdio.h>
#include <avr/io.h>
#define  F_CPU 16000000UL
#include <util/delay.h>
#include "functions.h"
int main(void)
{
	DDRD |=(1<<0) |(1<<1) |(1<<2);
	DDRA=0XFF;
    char num;
	/* Replace with your application code */
	while (1)
	{
		num=getkeypad();
		PORTA=num =='-' ? PORTA:num;
	}
}
