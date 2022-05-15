#define _CRT_SECURE_NO_WARNINGS
// power.c
#include "power.h"

double power(int x, int y)     // [평가항목 2] : 함수 사용
{
	double result = 1.0;	// 초기값은 1.0
	int i;

	for (i = 0; i < y; i++)
		result *= x;

	return result;
}