#include<bits/stdc++.h>
using namespace std;

int main(){
	int  N,Q;
	long long  arr[N];
	 for(long long i=1;i<N;i++)
	{
		cin>>arr[i];
	}
	
	while(Q--)
	{
		long long L,R;
		cin >>L>>R;
	
	
	long long sum=0;
	for(long long i=1;i<=R;i++){
		  sum+=arr[i];
	}
	cout<<sum<<endl;
  }
	return 0;
}