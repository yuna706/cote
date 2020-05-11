#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<string> album;
	
	album.push_back("PENTAGON");
	album.push_back("조진호");
	album.push_back("군대가지마");
	album.push_back("이던");
	album.push_back("키작은데");
	album.push_back("왜면제아니야");
	
	vector<string>::iterator iter;
	
	for(iter = album.begin(); iter != album.end(); iter++){
		if(*iter == "이던"){
			album.erase(iter);
			break;
		}
	}
	for(iter = album.begin(); iter != album.end(); iter++){
		cout << *iter << endl;
	}

}
