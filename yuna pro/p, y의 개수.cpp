#include <string>
#include <iostream>
using namespace std;
// y, p�� ������ ���� ������ �� �ٸ��� ������ ��ȯ
// ��ҹ��ڸ� �������� �ʰ� �˻��� 
bool solution(string s)
{
    bool answer = true;
    int p_s = 0;
    int y_s = 0;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'p' || s[i] == 'P'){
            p_s++;
        }
        else if(s[i] == 'y' || s[i] == 'Y'){
            y_s++;
        }
    }
    if(p_s != y_s){
        return false;
    }

    return answer;
}

int main(){
	cout << solution("pPoooyyyYpp");
} 
