#pragma once
#ifndef header_h
#define header_h
#include<stdio.h>
#include<locale.h>
#include<math.h>
struct complex
{
	int a,     //Вещественная часть числа 
		b;     //Мнимая часть числа
};
int menu();
void scan_numbers(complex *x, complex *y, int c);
#endif 
