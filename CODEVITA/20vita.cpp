
#include <iostream>
using namespace std;

int gap;
void christmas_tree(int,int);
int main()
{   
    int N,i,l=0;
    cin >> N;
        
    if(N<=1)
        cout << "\nYou cannot generate Christmas tree";
    else if(N>20)
        cout << "\nThe Tree is no More\n";
    else
    {   // First One pyramid
        christmas_tree(1,N+1);        
        // Others        
        for(i=2;i<N;i++,l++)
            christmas_tree(2,N-l);
        
        //Stand of the Tree
         for( i=0;i<=gap;i++)  
            cout << " ";
         cout << "*\n";
            
         for( i=0;i<=gap;i++)
            cout << " ";
         cout << "*";
    }
    return 0;
}
void christmas_tree(int a,int N)
{
    int row,Sp,Stars;
    static int space=0;
    for(row=a; row<=N; row++)
    {
        // Blank Spaces
        for(Sp=1;Sp<=N+space-row;Sp++)
          cout << " ";
        
        // Stars Printing
        for(Stars=1;Stars<=2*row-1;Stars++)
          cout << "*";
        
        cout << endl;
    }
    space++;
    gap=space;
}
