#define _CRT_SECURE_NO_WARNINGS
// power.c
#include "power.h"

double power(int x, int y)     // [���׸� 2] : �Լ� ���
{
	double result = 1.0;	// �ʱⰪ�� 1.0
	int i;

	for (i = 0; i < y; i++)
		result *= x;

	return result;
}