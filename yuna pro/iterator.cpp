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

	//iterator�� �ݺ��ڷ� �����Ϳ� ����� �� 
    vector<int>::iterator iter=v.begin();  // ���� �ݺ��� ��������

    //������ ��� 
    vector<int>::reverse_iterator riter = v.rbegin(); //
    
	cout << *riter << " " << *iter << endl;
    
    cout << iter[3] << endl;  // ��������

    iter += 2;  // += ����
    cout << *iter << endl; //*iter�� ���� iter[2]�� ������ 
    cout << endl;


    // �ݺ�
    for (iter = v.begin(); iter != v.end(); iter++){
        cout << *iter << endl;
    }
    cout << endl;
    
    

	
	for(riter = v.rbegin(); riter != v.rend(); riter++){
		cout << *riter << endl;
	} 


    return 0;
}
