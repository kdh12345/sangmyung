#include <stdio.h>

int main(void)
{
	int num1=15;
	int num2=20;
	int num3= num1&num2;
	int num4=num3<<1;
	int a,b;
	printf("0~255������ ���� �Է�: ");
	scanf("%d", &b);
	a=b&num4;
	printf("LSB���κ��� 4��° ��Ʈ����%d�� �����Ǿ��ֽ��ϴ�.\n", a);
	return 0;
}