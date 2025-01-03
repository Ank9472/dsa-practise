#include<bits/stdc++.h>
using namespace std;

int main(){
	int  N,Q;
	 cin>>N>>Q;
	 
    long long  arr[N+1]={0};
	for(long long i=1;i<N;i++)
	{
		cin>>arr[i];
	}
	
	for(long long i =1;i<=Q;i++)
	{
	  long long L,R;
	cin >>L>>R;
	
	long long sum =0;
	for(long long i=L;i<=R;i++){
      
      sum = sum + arr[i];

     }
    		
		cout<<sum<<endl;
	
	
	}
     return 0;
}