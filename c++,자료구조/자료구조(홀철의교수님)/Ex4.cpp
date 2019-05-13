#include <iostream>
#include <stdafx.h>
using namespace std;

int two[10], size;
void insert(int idx, int value);
int delete_value(int idx);
void print();

int _tmain(int argc, const char* argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	for (int i = 0; i < 10; i++){
		two[i] = i*i;
	}
	size = 10;
	delete_value(2);
	insert(0, 5);
	print();
	return 0;
}
void insert(int idx, int value) {
	if (size >= 10||idx>=10){
		cout << "배열이 꽉 찼습니다.또는 idx입력값이 10이상입니다." << "\n";
		return;
	}
	for (int i = size - 1; i >= idx; i--) {
		two[i + 1] = two[i];
	}
	two[idx] = value;
	size++;
}
int delete_value(int idx){
	if (idx >= size){
		cout << "삭제가 불가능합니다." << "\n";
		return -1;//오류표현
	}
	int tmp = two[idx];
	for (int i = idx + 1; i < size; i++){//최소 i가 1부터 들어가야 배열인덱스가 -1되는 경우가 없다.
		two[i - 1] = two[i];
	}
	size--;
	return tmp;
}
void print(){
	for (int i = 0; i < size; i++){
		cout << two[i] << "\n";
	}
}