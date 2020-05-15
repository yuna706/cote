#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//연속되는 같은 숫자들을 없애라 

vector<int> solution(vector<int> arr) 
{
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    return arr;
}

int main(){
	vector<int> arr{3,1,1,5,2,2,3,4};
	
	arr = solution(arr);
	
	vector<int>::iterator iter;
	for(iter = arr.begin(); iter != arr.end(); iter++){
		cout << *iter << endl;
	}
} 
