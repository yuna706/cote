#include <string>
#include <vector>
#include <iostream>
using namespace std;

// ���⸦ �������� ¦�� ��° ���ڸ� �빮��, Ȧ����° ���ڸ� �ҹ��ڷ� *0���� ���� 
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
