#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location){
	int answer = 0;
	
	queue<pair<int, int> > que;
	priority_queue<int> que2;
	
	for(int i = 0; i < priorities.size(); i++){
		que.push(make_pair(i, priorities[i])); // 자신의 칸 번호와 배열 원소 저장
		que2.push(priorities[i]);  
	}
	
	while(!que2.empty()){
		if(que.front().second == que2.top()){
			if(que.front().first == location){
				answer++;
				break;
			}
			else{
				answer++;
				que.pop();
				que2.pop();
			}
		}
		else{
			que.push(que.front());
			que.pop();
		}
	}
	
	return answer;
}

int main(){
	vector<int> a{2,1,3,2};
	
	cout << solution(a, 2);
}
