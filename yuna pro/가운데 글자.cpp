#include <string>
#include <vector>
#include <iostream>

//문자열의 가운데 글자만 저장하여 출력하라
//단, 짝수 글자일시 가운데 두 글자를 출력한다. 

using namespace std;

string solution(string s) {
    string answer = "";
    
    int a = s.length() / 2;
    
    if(s.length() % 2 == 0){
        answer += s[a-1];
        answer += s[a];
    }
    else{
        answer += s[a];
    }
    
    return answer;
}

int main(){
	string s = "powe";
	
	cout << solution(s);
}
