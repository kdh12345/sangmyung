#include <stdio.h>

int main(void)
{
	int num1=15;
	int num2=20;
	int num3= num1&num2;
	int num4=num3<<1;
	int a,b;
	printf("0~255사이의 정수 입력: ");
	scanf("%d", &b);
	a=b&num4;
	printf("LSB으로부터 4번째 비트값이%d로 설정되어있습니다.\n", a);
	return 0;
}