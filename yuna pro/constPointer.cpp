#include<iostream>
int main(){
	int value = 5;
	const int * p1 = &value; //포인터를 이용해 값 수정이 안됨, 주소 수정 됨 
	//*p = 8; error
	//*p = 변수; ok 
	
	int * const p2 = &value; //값 수정이 됨, 주소 수정 안됨
	//*p = 8; ok
	//*p = 변수; error
	
	const int * const p3 = &value; //값 수정 안됨, 주소 수정 안됨 
	//*p = 8; error
	//*p = 변수; error
	
	std::cout << *p1 << std::endl;
	std::cout << *p2 << std::endl;
	std::cout << *p3 << std::endl;
}
