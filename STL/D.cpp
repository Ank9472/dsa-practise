#include <iostream> 
#include <stack> 
using namespace std; 
int main() 
{ long long q;
 cin >> q ;
  stack<long long> S; 
  while(q--)
  { string s; 
  cin >>s; 
  if(s=="push")
  { long long x; 
  cin>>x;
  S.push(x); } 
  else if(s=="pop")
  { S.pop(); } 
  else if(s=="top")
  { cout << S.top() << endl; } 
  } 
  return 0; }