#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<string> album;
	
	album.push_back("PENTAGON");
	album.push_back("����ȣ");
	album.push_back("���밡����");
	album.push_back("�̴�");
	album.push_back("Ű������");
	album.push_back("�ָ����ƴϾ�");
	
	vector<string>::iterator iter;
	
	for(iter = album.begin(); iter != album.end(); iter++){
		if(*iter == "�̴�"){
			album.erase(iter);
			break;
		}
	}
	for(iter = album.begin(); iter != album.end(); iter++){
		cout << *iter << endl;
	}

}
