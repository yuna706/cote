#include<iostream>
int main(){
	int arr[] = {9, 5, 7, 3, 1};
	
	arr[8] = 8;
	
	for(auto i : arr){
		std::cout << i << " ";
		//i�� ���� ������� �ƴ϶� �迭 ��Ҹ� �޾Ƶ��� ä�� ������ ������ ������ 
	}
	
	std::cout << arr[8];
	//������ ����� �ٸ� ������ �ν��Ͽ� ���� �ȵ�
}
