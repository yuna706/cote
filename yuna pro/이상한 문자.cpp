#include <string>
#include <vector>
#include <iostream>
using namespace std;

// 띄어쓰기를 기준으로 짝수 번째 글자를 대문자, 홀수번째 글자를 소문자로 *0부터 시작 
string solution(string s) {
    string answer = "";
    bool a = false;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            answer += " ";
            a = false;
        }
        else{
            if(a == false){
                answer += toupper(s[i]);
                a = true;
            }
            else{
                answer += tolower(s[i]);
                a = false;
            }
        }
    }
    
    return answer;
}

int main(){
	string s = "hello hi yuna";
	
	cout << solution(s);
}
