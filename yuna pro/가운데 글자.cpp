#include <string>
#include <vector>
#include <iostream>

//���ڿ��� ��� ���ڸ� �����Ͽ� ����϶�
//��, ¦�� �����Ͻ� ��� �� ���ڸ� ����Ѵ�. 

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
