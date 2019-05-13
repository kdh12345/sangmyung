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
		cout << "�迭�� �� á���ϴ�.�Ǵ� idx�Է°��� 10�̻��Դϴ�." << "\n";
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
		cout << "������ �Ұ����մϴ�." << "\n";
		return -1;//����ǥ��
	}
	int tmp = two[idx];
	for (int i = idx + 1; i < size; i++){//�ּ� i�� 1���� ���� �迭�ε����� -1�Ǵ� ��찡 ����.
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