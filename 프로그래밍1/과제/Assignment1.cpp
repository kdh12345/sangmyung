#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main(void) 
{ 
	int i;
	int num;
	int num1=1, num2=50;
	int user;
	srand((unsigned)time(NULL)); 
	num = rand() % 50 + 1; 
	printf("��ǻ�Ͱ� 1~50 ������ ���� �ϳ��� �����߽��ϴ�!\n"); 
	for(i=1; ;i++)
	{ 
		for(num1=1; ;num1++)
		for(num2=50; ;num2--)
		printf("%d��° �õ�> ���ڸ� �Է��ϼ���: ",i);
		scanf("%d", &user,&num1,&num2);
		if(user < num) printf("Up!\n");
		else if(user > num) printf("Down!\n");
		if(num1>user||num2<user)
		printf("Stupid\n");
		else{ 
			printf("Bingo!!!\n"); 
			break; 
		} 
	} 
	printf("��ǻ�Ͱ� ������ %d��� ���ڸ� %d�� �õ����� ���߼̳׿�!\n", num, i); 
	return 0; 
} 