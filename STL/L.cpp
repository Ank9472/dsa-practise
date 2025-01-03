#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> m;
    long long x ;
    for (long long i = 1; i <= n; i++) {
      cin >> x;
      m[x] = i; 
    }
     
    if (m.size() < k) {
    cout << "NO" << endl;
      } else {
    cout << "YES" << endl;
    for (auto X : m) {
        if (k > 0) {
            cout << X.second<<" ";
            k--;
        }
    }cout<<endl;
}

         return 0;  
    }
    
    