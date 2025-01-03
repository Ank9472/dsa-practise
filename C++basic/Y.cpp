#include<bits/stdc++.h>
using namespace std;

int main(){
	int  N,Q;
	cin>>N>>Q;
	
	long long  arr[N+1] = {0};
	for(long long i=1;i<=N;i++)
	{
		cin>>arr[i];
	}
	
	long long pref[N+1] = {0};
    for(long long i=1;i<=N;i++){
       pref[i]=pref[i-1]+arr[i];
    } 
	
	while(Q--) // i take for loops but it goes through while loops 
	{
	long long L,R;
	cin >>L>>R;

	long long sum=0;
	if(pref[L-1]==pref[0])
	pref[0]=0;
	sum = pref[R] - pref[L-1];
	 
	cout<<sum<<endl;
  }
	return 0;
}

