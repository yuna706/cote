#include<iostream>
int main(){
	int a = 5, c = 8;
	
	const int *b = &a;
	
	b = &c;
	
	std::cout << *b;
}
