#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
	int Q;
	cin>>Q;
	string S;
	cin>>S;
	string orignal = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	string key = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; 
    orignal = key ;
    char x,y;
    int m,n;
    m = orignal.size()-1;
    n = key.size()-1;
	 
	   if(Q==1)
	 {  int j;
       while(S[j])  
       { 
     for(int i=0 ;i<m;i++)
       	 if(S[j] == orignal[i])
	       	     i++;
       	   swap(orignal[i],key[i])
       	} 	
	     x = y;
	   cout<<"orignal"<<endl;
	}
     else {  
         int j;
         while(S[j])  
       { 
          
    for(int i=0 ;i<n;i++)
       	 if(S[j] == key[i])
       	     i++;
       	   cin>>key[i];
       	   int i;
       	   swap(key[i],orignal[i])
       	}
	 	 y = x;
	 	cout<<"key"<<endl;
	}
	 
  return 0;	
  }
  
  
  //100 percent same concepts