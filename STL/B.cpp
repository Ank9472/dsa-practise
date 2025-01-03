#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    vector<long long> V(n);
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }
    sort(V.begin(), V.end());

    while (q--) {
        string S;
        cin >> S;
        if (S == "lower_bound") {
            long long x;
            cin >> x;
            auto it = lower_bound(V.begin(), V.end(), x);
            if (it != V.end()) {
                cout << *it << endl;
            } else {
                cout << -1 << endl;
            }
        } 
        else if (S == "upper_bound") {
            long long x;
            cin >> x;
            auto it = upper_bound(V.begin(), V.end(), x);
            if (it != V.end()) {
                cout << *it << endl;
            } else {
                cout << -1 << endl;
            }
        }
        else if (S == "binary_search") {
            long long x;
            cin >> x;
            if (binary_search(V.begin(), V.end(), x)) {
                cout << "found" << endl;
            } else {
                cout << "not found" << endl;
            }
        }
    }
    return 0;
}
