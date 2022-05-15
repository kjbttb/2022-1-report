/* [주석 1 : 과제 설명]

  컴퓨터프로그래밍 평가과제 (배점 25점)
  학과 :
  학번 :
  이름 :

  과제 주제 :

*/

#define _CRT_SECURE_NO_WARNINGS
// main.c
#include <stdio.h>
#include "power.h"

int main(void)
{
	int x, y;

	printf("x의 값을 입력하시오:");
	scanf("%d", &x);
	printf("y의 값을 입력하시오:");
	scanf("%d", &y);
	printf("%d의 %d 제곱값은 %f\n", x, y, power(x, y));

	return 0;
}