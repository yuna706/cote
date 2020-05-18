#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

//나누어 떨어지는 숫자 배열 정렬 
vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % divisor == 0){
            answer.push_back(arr[i]);
        }
    }
    if(answer.size() == 0){
        answer.push_back(-1);
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}

int main(){
	vector<int> a {2,36,1,3};
	int b = 3;
	
	a = solution(a, b);
	
	for(auto i : a){
		cout << i << " ";
	}
}
