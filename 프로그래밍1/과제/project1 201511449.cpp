#include <stdio.h>

int main(void)
{
	int a,b;
	int y1, y2;
	float X, Y;
	printf("�����Ǳ���1 �Է�:");
	scanf("%d",&a);
	printf("������ ����2 �Է�: ");
	scanf("%d",&b);
	printf("y����1 �Է�: ");
	scanf("%d",&y1);
	printf("y����2 �Է�: ");
	scanf("%d", &y2);
	X=(y2-y1)/(a-b);
	Y=X*a+y1, X*b+y2;
	printf("%.3f\n", X);
	printf("%.3f\n", Y);
	return 0;
}

