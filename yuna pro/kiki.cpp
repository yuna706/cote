#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> arr = {1,2,8,4,5};
	
	for(auto &a:arr){
		cout << a << " ";
	}
	
	cout << arr[1] << " " << arr.at(1);
	
	delete[] arr;
	
	cout << arr[1];
}
