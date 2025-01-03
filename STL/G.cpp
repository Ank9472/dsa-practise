#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n,m,q;
	cin>>n>>m>>q;
	vector<vector<long long>>v(n,vector<long long>(m));
	for(int i=1;i<=n;i++)
	{
	for(int j = 1; j <=m;j++)
	{
		 cin>>v[i][j];

     }
	  
	}
    vector<vector<long long>>prefsum(n,vector<long long>(m));
    { for(int i=1;i<=n;i++)
	   {
		 for(int j=1;j<=m;j++){
		if(i==1)
		 { 
		    prefsum[i][j] = prefsum[i][j+1] + v[i][j];
		 }
	     else{
	     	 prefsum[i][j] = prefsum[i][j-1] + v[i][j];
	      }  
		}
	 }	

 	   }
 while(q--){
	  {  
	       long long x1,y1,x2,y2;
	       cin>>x1>>y1>>x2>>y2;
           cout<<prefsum[x2][y2]- prefsum[x1][y1]<<endl;
     }
      }
      
   
         return 0;
	 }
// always remember when error comes on the unintialization then it must means that you can't take the value