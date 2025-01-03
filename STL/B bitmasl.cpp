#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    long long n,q;
    cin >> q >> n;
    while (q--) {

    long long no, x;
    cin >> no >> x;

    if (no == 1) {
        cout << ((n >> x) & 1);
        continue;
    } else if (no == 2) {
        n |= (1 << x);
           cout << n << endl;
    } else if (no == 3) {
        n &= ~(1 << x);
        cout << n << endl;
    } else {
        n = (1 << x);
        cout << n << endl;
         
    }
 
 
}      
   return 0 ;
}

