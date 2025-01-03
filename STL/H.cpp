#include <iostream> 
#include <queue>
using namespace std; 

int main() 
{  
   long long q;
   cin >> q;
  
  
  priority_queue<long long,vector<long long>, greater<long long>>pq;
  while(q--) {
       string s;
       cin >> s;
       if(s == "push") {
           long long val;
           cin >> val;
           pq.push(val);
       } else if(s == "top") 
           {
               cout << pq.top() << endl;
       } else if(s == "pop") {
            pq.pop();
        }
   }
   
     return 0;
}






































