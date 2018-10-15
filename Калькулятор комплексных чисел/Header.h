#pragma once
#ifndef header_h
#define header_h
#include<stdio.h>
#include<locale.h>
#include<math.h>
struct complex
{
        int a, b;
};
int menu();
void scan_numbers(struct complex *x,struct complex *y, int c);
#endif 
