#include<iostream>
int main(){
	int value = 5;
	const int * p1 = &value; //�����͸� �̿��� �� ������ �ȵ�, �ּ� ���� �� 
	//*p = 8; error
	//*p = ����; ok 
	
	int * const p2 = &value; //�� ������ ��, �ּ� ���� �ȵ�
	//*p = 8; ok
	//*p = ����; error
	
	const int * const p3 = &value; //�� ���� �ȵ�, �ּ� ���� �ȵ� 
	//*p = 8; error
	//*p = ����; error
	
	std::cout << *p1 << std::endl;
	std::cout << *p2 << std::endl;
	std::cout << *p3 << std::endl;
}
