#include <iostream>
#include <algorithm>
#include <set>
using namespace std; 

int main() 
{  
    long long q,n;
    cin >> q >> n;

    while (q--) {
        long long x;
        cin >> x;

        if (x == 1) {
            long long a;
            cin >> a;
            cout << (n | a) << endl;
            n = n | a;
        }
        else if (x == 2) {
            long long a;
            cin >> a;
            cout << (n & a) << endl;
            n &= a;
        }
        else if (x == 3) {
            long long a;
            cin >> a;
            cout << (n ^ a) << endl;
            n = n ^ a; 
        }
        else if (x == 4) {
            cout << (~n) << endl; 
            n = ~n; 
        }
    }
    return 0;
}
