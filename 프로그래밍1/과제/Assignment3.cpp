#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RockScissorPaper()
{
	int com,user;
	int num;
	int count1=0,count2=0,count3=0;//count1은 이긴거, count2는 비긴거, count3는 진거
	int i=0;
	int j=1;
	double rate;
	printf("몇 번 대결하시겠습니까.\n");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
 {
	 srand((unsigned)time(NULL)); // 랜덤함수 seed값 설정
	com = rand() % 3 + 1;
	 printf("\n");
   printf("%d번째 대결 ", i);
  do{
         printf("셋 중 하나를 선택하시오.\n1.가위\n2.바위\n3.보\n입력하세요:");
         scanf_s("%d", &user);
         if ((user > 3) || (user < 0))
            printf("잘못입력하셨습니다.");
      } while ((user > 3) || (user < 0));
   /*while (j != 0)
  {
   printf("셋 중 하나를 선택하시오.\n1.가위\n2.바위\n3.보\n입력하세요:");
   scanf_s("%d", &user);

   if ((user > 3) || (user < 0))
    printf("잘못입력하셨습니다.");
   else
	   j = 0;
    
  }*/
    if (com == 1 && user == 1)
	{	printf("COM:가위 vs USER:가위 무승부");
		count2++;
	}
   else if(com == 2 && user == 2)
   {
	   printf("COM:바위 vs USER:바위 무승부");
	   count2++;
	}
   else if (com == 3 && user == 3)
   {
	   printf("COM:보 vs USER:보 무승부");
	   count2++;
   }
   else if (com == 1 && user == 2)
   {
	   printf("COM:가위 vs USER:바위 승");
	   count1++;
   }
   else if (com == 2 && user == 3)
	{
		printf("COM:바위 vs USER:보 승");
		count1++;
   }
   else if (com == 3 && user == 1)
   {
	   printf("COM:보 vs USER:가위 승");
	   count1++;
   }
   else if (com == 1 && user == 3)
   {
	   printf("COM:가위 vs USER:보 패");
		count3++;
   }
   else if (com == 2 && user == 1)
   {
	   printf("COM:바위 vs USER:가위 패");
	   count3++;
   }
   else if (com == 3 && user == 2)
   {
	   printf("COM:보 vs USER:바위 패");
	   count3++;
   }
}
	printf("\n");
 rate = (double)count1 / i;
 printf("최종성적: %d전 %d승 %d무승부 %d패(rate %f)", i, count1, count2, count3, rate);
}
int main(void)
{
	RockScissorPaper();
	return 0;
}