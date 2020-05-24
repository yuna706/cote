#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
	map<string, int> m; //map 생성 
	
	//밑의 3가지 방법 모두 사용가능하다. 
	m.insert(pair<string, int>("abc", 4));  
	m.insert(make_pair("ab",5));
	m["abcd"] = 6;
	m["abcde"] = 8;
	
	cout<<m.size()<<endl;
	
	m.erase("abc"); //abc키값에 해당하는 value 삭제
	
	
	
	cout << "abc : " << m.count("abc") << '\n';
	cout << "ab : " << m.count("ab")<< '\n';
	
	for(auto it = m.begin(); it!=m.end(); it++) { //iterator를 이용해서 map 순회 
		cout<<"key: " << it->first << " value: "<< it->second<<endl;
	}
	
	m.clear(); //모든 원소제거 
	
	cout<<m.empty()<<endl; // 비어있어서 1 반환 
	
	return 0; 
}
