#include<bits/stdc++.h>
using namspace std;
int main(){
  int n;
  int arr[];
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	  cin>> arr[i];
      if(arr[i+1]>arr[i])
      {
         swap(arr[i],arr[i+1]); 
      } 	
  }
      return 0;
}
