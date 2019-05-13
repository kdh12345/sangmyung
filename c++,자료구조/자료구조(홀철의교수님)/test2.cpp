// test2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100	// 스택의 최대 크기
typedef int element;		// 데이터의 자료형
element  stack[MAX_STACK_SIZE]; // 1차원 배열
int  top = -1;			

// 공백 상태 검출 함수
int is_empty()
{
	return (top == -1);
}
// 포화 상태 검출 함수
int is_full()
{
	return (top == (MAX_STACK_SIZE - 1));
}
// 삽입 함수
void push(element item)
{
	if (is_full()) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else stack[++top] = item;
}
// 삭제 함수
element pop()
{
	if (is_empty()) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return stack[top--];
}
// 피크 함수
element peek()
{
	if (is_empty()) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return stack[top];
}

int _tmain(int argc, _TCHAR* argv[])
{
/*
	//10번
	int i, list[6];

	printf("정수를 입력하시오: ");
	for (i=0; i<6; i++) {
		scanf("%d", list+i);
	}
	for (i=0; i<6; i++)
		push(list[i]);
	for (i=0; i<6; i++)
		list[i]= pop();
	
	printf("반전된 정수 배열: ");
	for (i=0; i<6; i++)
		printf("%d ", list[i]);
*/
/*
	//11번
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
	//12번
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
	//13번: 12번 첨조 

	//14번: top+1

	//16번
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
			printf("회문이 아닙니다\n");
			return 0;
		}
	}
	printf("회문입니다\n");

		

	return 0;
}

