#include <string>
#include <vector>
#include <iostream>

//정수 n만큼 수, 박 의 패턴으로 진행되는 문자열을 출력하라. 
using namespace std;

string solution(int n) {
    string answer = "";
    
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            answer += "수";
        }
        else{
            answer += "박";
        }
    }
    
    return answer;
}

int main(){
	int n = 301;
	
	cout << solution(n);
}
