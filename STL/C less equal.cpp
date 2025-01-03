#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    bool found = false;
    for(long long i = 1; i <= n; i++) {
        cin >> v[i];    
    }
    sort(v.begin(),v.end());
    for(long long i = 1; i <= n; i++) {
        if(v[i] <= k) {
            long long cnt ;
            cnt ++;
           if(cnt>=k)
           {
           	
           } 
        }  
      else {
      	 cout<< -1 << endl;
      }  
    }
    if(!found) {
        cout << -1 << endl;
    }
    return 0;
}
