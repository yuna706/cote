#include<iostream>
int main(){
	int arr[] = {9, 5, 7, 3, 1};
	
	arr[8] = 8;
	
	for(auto i : arr){
		std::cout << i << " ";
		//i는 숫자 세기용이 아니라 배열 요소를 받아들인 채로 범위의 끝까지 수행함 
	}
	
	std::cout << arr[8];
	//범위가 끊기면 다른 범위로 인식하여 실행 안됨
}
