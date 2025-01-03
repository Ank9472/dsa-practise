#include<iostream>
using namespace std;

int main(){
    int number,five,one,two;
   cin>>number;
   five = (number-5)/5;

   if(number%2==0)
   {
    one = 2;
   } 
   else{
    one = 1;
   }
  
  two = (number-five*5-one*1)/2;

  cout<<(five+two+one)<<endl;
  cout<<five<<" "<<two<<" "<<one;

}