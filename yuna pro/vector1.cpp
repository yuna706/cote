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
	
	//ex1) ��� ���� size_type �̿��� �ݺ�
	cout << "[v.at(i)] size_type : ";
	for(vector<int>::size_type i = 0; i < v.size(); i++){
		cout << v.at(i) << " ";
	}
	
	//ex2) int i�� �̿��� �ݺ�
	cout << "[v.at(i)] int : ";
	for(int i = 0; i < v.size(); i++){
		cout << v.at(i) << " ";
	}
	
	//ex3) �ݺ��� iterator�� �̿��� �ݺ�
	cout << "[*itet] iterator : ";
	vector<int>::iterator iter;
	for(iter = v.begin(); iter != v.end(); iter++){
		cout << *iter << " ";
	}
}
