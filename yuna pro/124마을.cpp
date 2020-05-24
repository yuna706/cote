#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(int n){
   
   string answer = "";
   
   vector<int> a;
   
   while(n != 0){
      if(n%3 == 0){
         answer.insert(0, "4");
         n /= 3;
         n--;
      }
      else{
         answer.insert(0, to_string(n%3));
         n /= 3;
      }
   }
   
   return answer;
}

int main(void){
   int n;
   
   cin >> n;
   cout << solution(n);
   
   return 0;
}
