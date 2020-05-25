#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    queue<int> que;
    queue<int> que2;
    
    for(auto a : progresses){
        que.push(a);
    }
    for(auto a : speeds){
        que2.push(a);
    }
    
    vector<int> day;
    int d = 0;
    
    while(!que.empty()){
        day.push_back(0);
        
        for(int i = 0; i < que.size(); i++){
            if(que.front() >= 100)
            que.front() += que2.front();
            que.push(que.front()); que.pop();
            que2.push(que2.front()); que2.pop();
        }
        if(que.empty()) break;
        while(que.front() >= 100){
            day[d]++;
            que.pop();
            que2.pop();
        }
        d++;
    }
    
    day.erase(remove(day.begin(), day.end(), 0), day.end());
    
    return day;
}

int main(){
	vector<int> a, b;
	
	a = {93,30,55};
	b = {1,30,5};
	
	vector<int> c = solution(a,b);
	
	for(auto a:c){
		cout << a;
	}
}
