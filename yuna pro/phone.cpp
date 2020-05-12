#include<iostream>
#include<string>
#include<vector>
using namespace std;
void solution(string pn){
	
	for(int i = 0; i < pn.size() - 4; i++)
		cout << "*";
		
	for(int j = pn.size()-4; j < pn.size(); j++)
		cout << pn[j];
	
	cout << endl;
}
int main(){
	string pn;
	vector<string> phone_number;
	int i = 0;
	
	while(true){
		cin >> pn;
		phone_number.push_back(pn);
		
		int pn_s = phone_number[i].size();
		
		cout << pn_s << endl;
		
		if(pn_s < 20 && pn_s > 5){
			solution(phone_number[i]);
			i++;
		}
		else{
			phone_number.erase(phone_number.end()-1);
			break;
		}
	}
}
