#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
   string X;
   cin>>X; 
   string Y;
   cin>>Y; 
   int i= 0;
   while(min(X.size() , Y.size()))
   {
     if(X[i] == Y[i])
      { i++;
      }
    else if(X[i]>Y[i])
     {
     	cout<<Y<<endl;
     	break;
     }
    else{
    	  cout<<X<<endl;
    	  break;
     }    
   }
    return 0;
}



// maza aa gaya