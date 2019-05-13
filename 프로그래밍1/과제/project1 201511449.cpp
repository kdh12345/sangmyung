#include <stdio.h>

int main(void)
{
	int a,b;
	int y1, y2;
	float X, Y;
	printf("직선의기울기1 입력:");
	scanf("%d",&a);
	printf("직선의 기울기2 입력: ");
	scanf("%d",&b);
	printf("y절편1 입력: ");
	scanf("%d",&y1);
	printf("y절편2 입력: ");
	scanf("%d", &y2);
	X=(y2-y1)/(a-b);
	Y=X*a+y1, X*b+y2;
	printf("%.3f\n", X);
	printf("%.3f\n", Y);
	return 0;
}

