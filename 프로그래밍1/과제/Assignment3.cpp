#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RockScissorPaper()
{
	int com,user;
	int num;
	int count1=0,count2=0,count3=0;//count1�� �̱��, count2�� ����, count3�� ����
	int i=0;
	int j=1;
	double rate;
	printf("�� �� ����Ͻðڽ��ϱ�.\n");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
 {
	 srand((unsigned)time(NULL)); // �����Լ� seed�� ����
	com = rand() % 3 + 1;
	 printf("\n");
   printf("%d��° ��� ", i);
  do{
         printf("�� �� �ϳ��� �����Ͻÿ�.\n1.����\n2.����\n3.��\n�Է��ϼ���:");
         scanf_s("%d", &user);
         if ((user > 3) || (user < 0))
            printf("�߸��Է��ϼ̽��ϴ�.");
      } while ((user > 3) || (user < 0));
   /*while (j != 0)
  {
   printf("�� �� �ϳ��� �����Ͻÿ�.\n1.����\n2.����\n3.��\n�Է��ϼ���:");
   scanf_s("%d", &user);

   if ((user > 3) || (user < 0))
    printf("�߸��Է��ϼ̽��ϴ�.");
   else
	   j = 0;
    
  }*/
    if (com == 1 && user == 1)
	{	printf("COM:���� vs USER:���� ���º�");
		count2++;
	}
   else if(com == 2 && user == 2)
   {
	   printf("COM:���� vs USER:���� ���º�");
	   count2++;
	}
   else if (com == 3 && user == 3)
   {
	   printf("COM:�� vs USER:�� ���º�");
	   count2++;
   }
   else if (com == 1 && user == 2)
   {
	   printf("COM:���� vs USER:���� ��");
	   count1++;
   }
   else if (com == 2 && user == 3)
	{
		printf("COM:���� vs USER:�� ��");
		count1++;
   }
   else if (com == 3 && user == 1)
   {
	   printf("COM:�� vs USER:���� ��");
	   count1++;
   }
   else if (com == 1 && user == 3)
   {
	   printf("COM:���� vs USER:�� ��");
		count3++;
   }
   else if (com == 2 && user == 1)
   {
	   printf("COM:���� vs USER:���� ��");
	   count3++;
   }
   else if (com == 3 && user == 2)
   {
	   printf("COM:�� vs USER:���� ��");
	   count3++;
   }
}
	printf("\n");
 rate = (double)count1 / i;
 printf("��������: %d�� %d�� %d���º� %d��(rate %f)", i, count1, count2, count3, rate);
}
int main(void)
{
	RockScissorPaper();
	return 0;
}