#include<stack>
#include<iostream>

using namespace std;

int main(){
	stack<int> s;
	
	cout << s.empty() << endl; // ��������� true, ��������� false 
	
	s.push(4);
	s.push(2);
	s.push(3);
	
	cout << s.top() << endl; // top ĭ ��� 
	
	s.pop(); // top ĭ ���� 
	cout << s.top() << endl;
	
	cout << s.empty() << endl << s.size();
	
}
