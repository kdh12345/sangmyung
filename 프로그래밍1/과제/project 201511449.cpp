#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5;
	float avr, vra, vra1;
	printf("첫번째 학생의 점수: ");
	scanf("%d", &num1);
	printf("두번째 학생의 점수: ");
	scanf("%d", &num2);
	printf("세번째 학생의 점수: ");
	scanf("%d", &num3);
	printf("네번째 학생의 점수: ");
	scanf("%d", &num4);
	printf("다섯번째 학생의 점수: ");
	scanf("%d", &num5);
	avr= (num1+num2+num3+num4+num5)/5.0f;
	vra= (num1-avr)*(num1-avr)+(num2-avr)*(num2-avr)+(num3-avr)*(num3-avr)+(num4-avr)*(num4-avr)+(num5-avr)*(num5-avr);
	vra1=vra/4;
	printf("평균:%.3f\n",avr);
	printf("분산:%.3f\n",vra1);
	return 0;
}