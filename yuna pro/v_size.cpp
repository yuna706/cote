#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> arr;
	
	arr = {0,1,2,3};
	cout << arr.size() << " "<< arr.capacity() << endl; //4 4

	arr.push_back(4);
	cout << arr.size() << " "<< arr.capacity() << endl; //5 8
	
	arr.resize(10);
	cout << arr.size() << " "<< arr.capacity() << endl; //10 10
	
	arr.push_back(4);
	cout << arr.size() << " "<< arr.capacity() << endl; //11 20
	
	//원래의 사이즈의 capacity는 두배로 늘어남 
}
