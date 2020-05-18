#include<stack>
#include<iostream>

using namespace std;

int main(){
	stack<int> s;
	
	cout << s.empty() << endl; // 비어있으면 true, 들어있으면 false 
	
	s.push(4);
	s.push(2);
	s.push(3);
	
	cout << s.top() << endl; // top 칸 출력 
	
	s.pop(); // top 칸 삭제 
	cout << s.top() << endl;
	
	cout << s.empty() << endl << s.size();
	
}
