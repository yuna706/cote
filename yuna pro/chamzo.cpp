#include<iostream>
using namespace std;

//���� �Լ� 
int change(int& ref){
	ref = 8;
	
	return 0; 
}

//�迭 ���� 
int ptn(int (&arr)[4]){
//int (&arr)[4]���� (&arr)�� ��ȣ�� ���� ������
//arr�� ������ ��ġ�� �迭�� ���� ���� �ű� ������
//int &arr[4]�� �ϸ� arr�� �迭�� ���� �� 
	int length{sizeof(arr) / sizeof(arr[0])};
	
	for(int i{0}; i < length; i++){
		cout << arr[i] << endl;
	}
	
	return 0;
}

int main(){
	int n = 50;
	int& ref = n;
	int arr[4]{99, 20, 14, 80};
	
	cout << ref << endl;
	
	change(n);
	
	cout << n << " " << ref << endl;
	
	ptn(arr);
}
