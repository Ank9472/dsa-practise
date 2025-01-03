#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    string S;
    S = "PUM" ;
   
    for( int i=1; i <= N;i++)
    {
      for(int j = i; j <= (i*4); j++)
       {
       	   int m = j%4;
     	 if(m == 0){
       	 	cin>>S;
       	 }
       	 else{
       	 	cin>>j;
       	 }
           cout<<j<<S<<endl;
         }
      }
    return 0;
  }
  