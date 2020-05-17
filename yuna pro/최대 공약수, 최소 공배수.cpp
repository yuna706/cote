#include <iostream>
using namespace std;

int gcd(int a, int b){
	int n;
	while(b != 0){
		n = a % b;
		a = b;
		b = n;
	}
	
	return a;
}
int lcm(int a, int b){
    return a * b / gcd(a,b);
}

int main(){
	cout << gcd(3,12) << " " << lcm(3, 12);
}
