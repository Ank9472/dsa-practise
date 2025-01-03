#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>> n;

if(n>= 0)
{
    cout<< 1;
} 
else if(n>2)
{
    int j = 1+ (n-1) + (n-2) + (n-3) ;
    cout<< j;
}
return 0;
}


