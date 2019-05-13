// test2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100	// ������ �ִ� ũ��
typedef int element;		// �������� �ڷ���
element  stack[MAX_STACK_SIZE]; // 1���� �迭
int  top = -1;			

// ���� ���� ���� �Լ�
int is_empty()
{
	return (top == -1);
}
// ��ȭ ���� ���� �Լ�
int is_full()
{
	return (top == (MAX_STACK_SIZE - 1));
}
// ���� �Լ�
void push(element item)
{
	if (is_full()) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else stack[++top] = item;
}
// ���� �Լ�
element pop()
{
	if (is_empty()) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else return stack[top--];
}
// ��ũ �Լ�
element peek()
{
	if (is_empty()) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else return stack[top];
}

int _tmain(int argc, _TCHAR* argv[])
{
/*
	//10��
	int i, list[6];

	printf("������ �Է��Ͻÿ�: ");
	for (i=0; i<6; i++) {
		scanf("%d", list+i);
	}
	for (i=0; i<6; i++)
		push(list[i]);
	for (i=0; i<6; i++)
		list[i]= pop();
	
	printf("������ ���� �迭: ");
	for (i=0; i<6; i++)
		printf("%d ", list[i]);
*/
/*
	//11��
	int i;
	char ch, par[20]= "((())(()))";
	int count= 1;

	i=0;
	ch= par[i];
	while (ch!='\0') 
	{
		switch (ch)
		{
		case '(':
			printf("%d ", count);
			push(count++);
			break;
		case ')':
			printf("%d ", pop());
			break;
		default:
			break;
		}
		ch= par[++i];
	}
*/
	/*
	//12��
	int i, count;
	char ch1, ch2, str[10]="aaaAbBb";

	i=0;
	count= 1;
	ch1= str[i];
	while (ch1!='\0') 
	{
		ch2= str[++i];
		if (ch2>='A' && ch2<='Z')
			ch2= 'a' + ch2-'A';
		if (ch1==ch2) {
			count++;
		}
		else {
			printf("%d%c", count, ch1);
			count=1;
			ch1= ch2;
		}
	}
	printf("\n");
*/
	//13��: 12�� ÷�� 

	//14��: top+1

	//16��
	char str[20], str1[20]= "madam, I'm Adam";
	int size= (int)strlen(str1);
	int i, j, last;

	for (i=0, j=0; i<size; i++) {
		if (str1[i]>='a' && str1[i]<='z')
			str[j++]= str1[i];
		else if (str1[i]>='A' && str1[i]<='Z')
			str[j++]= 'a' + str1[i]-'A';
	}
	str[j]='\0';
	size= j;
	last= size-1;
	for (i=0; i<size/2; i++) {
		if (str[i]!=str[last-i]) {
			printf("ȸ���� �ƴմϴ�\n");
			return 0;
		}
	}
	printf("ȸ���Դϴ�\n");

		

	return 0;
}

