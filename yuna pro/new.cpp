#include<iostream>
int main(){
	int a = 6;
	int * b = new int[5]{1,54,8,6};
	
	
	std::cout << a << " "<< b[2] << std::endl;
	
	delete b; // Áö¿öÁü 
	std:: cout<< b[2];
}
