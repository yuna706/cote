#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    vector<int> day;
    int d = 0;
    while(!progresses.empty()){
        int j = 0;
        day.push_back(0);
        
        for(int i = 0; i < progresses.size(); i++){
            progresses[i] += speeds[i];
        }
        
        while(progresses[0] >= 100){
            day[d]++;
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
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
