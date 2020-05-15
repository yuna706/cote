#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

//문자열을 내림차로 정렬하라 
string solution(string s) {
    string answer = "";
    
    char tamp;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size(); j++){
            if(s[j] < s[j+1]){
                tamp = s[j];
                s[j] = s[j+1];
                s[j+1] = tamp;
            }
        }
    }
    
    return s;
    
    //sort(s.rbegin(), s.rend());
}

int main(){
	string s = "Zbcdefg";
	
	cout << solution(s);
}
