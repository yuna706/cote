#include<iostream>
//#include<array>
using namespace std;

int change(int& ref){
	ref = 8;
	
	return 0;
}
int ptn(int (&arr)[4]){
//int (&arr)[4]에서 (&arr)로 괄호를 묶는 이유는
//arr가 참조한 위치의 배열을 갖고 오는 거기 때문임
//int &arr[4]로 하면 arr의 배열을 갖고 옴 
	int length = {sizeof(arr) / sizeof(*arr)};
	
	cout << length << endl;
	
	for(int i = 0; i < length; i++){
		cout << arr[i] << endl;
	}
	
	return 0;
}

int main(){
	int n = 50;
	int& ref = n;
	int arr[4] = {99, 20, 14, 80};
	
	cout << ref << endl;
	
	change(n);
	
	cout << n << " " << ref << endl;
	
	ptn(arr);
}
