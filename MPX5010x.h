/*
* Оригинальная идея (c) Sebra
* Алгоритм регулирования (c) Chatterbox
* 
* Вольный перевод в библиотеку Tomat7
* Version 0.7
* 
* A0 - подключение "измерителя" напряжения (трансформатор, диодный мост, делитель напряжения)
* A1 - подключение датчика тока ACS712
* D5 - управление триаком
* D3 - детектор нуля
*
*/
#ifndef MPX5010x_h
#define MPX5010x_h

#include "Arduino.h"

#define LIBVERSION "MPX5010x_v20180329 on pin: "

class MPX5010x
{
public:
	MPX5010x(int analogPin);

	void init();
	void check();
	int Press_mmHg;
	//float Press_kPa;			// раскоментировать если нужны килоПаскали с плавающей точкой
	//uint16_t ADCperiod;		// DEBUG!! убрать
	
	//=== Прерываниe
	static void GetADC_int() __attribute__((always_inline));
	
protected:
	volatile static unsigned int _cntr;
	volatile static unsigned long _Summ;
	int pin_;
	//unsigned long _ADCmillis;			// DEBUG!! убрать
};

#endif
