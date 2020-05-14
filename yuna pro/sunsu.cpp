#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    for(int i = 0; i < participant.size(); i++){
        if(participant[i] != completion[i])
            return participant[i];
    }
    return participant.back();
}

int main(){
	vector<string> participant{"yuna", "leo", "kiki", "eden"};
	vector<string> completion{"kiki", "eden", "leo"};
	
	cout << solution(participant, completion);
}
