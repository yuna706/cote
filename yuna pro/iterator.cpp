#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30); 
    v.push_back(40);
    v.push_back(50);

	//iterator는 반복자로 포인터와 비슷한 것 
    vector<int>::iterator iter=v.begin();  // 벡터 반복자 시작지점

    //역방향 출력 
    vector<int>::reverse_iterator riter = v.rbegin(); //
    
	cout << *riter << " " << *iter << endl;
    
    cout << iter[3] << endl;  // 임의접근

    iter += 2;  // += 연산
    cout << *iter << endl; //*iter는 지금 iter[2]인 상태임 
    cout << endl;


    // 반복
    for (iter = v.begin(); iter != v.end(); iter++){
        cout << *iter << endl;
    }
    cout << endl;
    
    

	
	for(riter = v.rbegin(); riter != v.rend(); riter++){
		cout << *riter << endl;
	} 


    return 0;
}
