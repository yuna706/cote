#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    n++;
    vector<int> re(n, 1);
    
    for(auto i : lost){
        re.at(i)--;
    }
    
    for(auto i : reserve){
        re.at(i)++;
	}

	for(int i : reserve){
    	if(re.at(i-1) == 0){
            re.at(i-1)++;
            re.at(i)--;
        }
        else if(i == re.size() -1) break;
        else if(re.at(i+1) == 0){
            re.at(i+1)++;
            re.at(i)--;
        }
	}
	    
    for(auto i : re){
        if(i != 0) answer++;
    }
    answer--;
    
    return answer;
}
int main(){
	vector<int> a{2, 4};
	vector<int> b{1, 3, 5};
	solution(5, a, b);
}
