#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
   long n; 
   cin>>n;
   string s;
   cin>>s;
   {
   	int sum = 0;
   	for(long long i=0;i<s.size();i++){
   		sum+=(long long)s[i]-48;
   	} 
   	   cout<<sum<<endl;                        
   } 
  return 0;
}

// yaha par s[i] direct as a chracter pehle number 
//ko extra
//due to large no take lng lng
