#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
	map<string, int> m; //map ���� 
	
	//���� 3���� ��� ��� ��밡���ϴ�. 
	m.insert(pair<string, int>("abc", 4));  
	m.insert(make_pair("ab",5));
	m["abcd"] = 6;
	m["abcde"] = 8;
	
	cout<<m.size()<<endl;
	
	m.erase("abc"); //abcŰ���� �ش��ϴ� value ����
	
	
	
	cout << "abc : " << m.count("abc") << '\n';
	cout << "ab : " << m.count("ab")<< '\n';
	
	for(auto it = m.begin(); it!=m.end(); it++) { //iterator�� �̿��ؼ� map ��ȸ 
		cout<<"key: " << it->first << " value: "<< it->second<<endl;
	}
	
	m.clear(); //��� �������� 
	
	cout<<m.empty()<<endl; // ����־ 1 ��ȯ 
	
	return 0; 
}
