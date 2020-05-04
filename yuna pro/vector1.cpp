#include<vector>
#include<iostream>
using namespace std;

int main(){
	vector<int> v;
	
	v.push_back(21);
	v.push_back(32);
	v.push_back(53);
	v.push_back(64);
	v.push_back(15);
	
	//ex1) 멤버 형식 size_type 이용한 반복
	cout << "[v.at(i)] size_type : ";
	for(vector<int>::size_type i = 0; i < v.size(); i++){
		cout << v.at(i) << " ";
	}
	
	//ex2) int i를 이용한 반복
	cout << "[v.at(i)] int : ";
	for(int i = 0; i < v.size(); i++){
		cout << v.at(i) << " ";
	}
	
	//ex3) 반복자 iterator를 이용한 반복
	cout << "[*itet] iterator : ";
	vector<int>::iterator iter;
	for(iter = v.begin(); iter != v.end(); iter++){
		cout << *iter << " ";
	}
}
