#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
	vector<int> a{21,5,1,51,5,13,2};
	
	queue<int> que;
	queue<int> qu;
	
	que.push(4);
	que.push(32);
	que.push(3);
	que.push(2);
	
	while(!que.empty()){
		cout << que.front() << " ";
		que.pop();
	}
	
	
	swap(que, qu); //ºóÄ­À¸·Î ÃÊ±âÈ­ 
	
	for(int i = 0; i < que.size(); i++)
		cout << que.front() << " ";
}
