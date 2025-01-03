#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
	 long long n;
	 cin>>n;
	 vector<long long>v(n);
	 for(long long i=0;i<n;i++){
	 	cin>>v[i];
	 }
	 long long cnt = 1;
	 long long valid = 0;
	 for(long long i= 1; i<n;i++){
	 	if(v[i]>=v[i-1]){
	 		cnt ++;
	 	}
	 	else{
	 //		cout<<cnt<<"="<<endl;
	 		valid+=(cnt*(cnt+1)/2);
	 		cnt=1;
	 	}
	 }
	// cout<<cnt<<"+"<<endl;
	 valid+=(cnt*cnt+1)/2;
	 cout<<valid<<endl;
	 }
  }
	
//concepts of L and Q are the same. we don't 
//need to be the sorting the array 