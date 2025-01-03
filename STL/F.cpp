#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    vector<long long> v(n + 1);
    for (long long i = 1; i <= n; i++) {
        cin >> v[i];
    }
    vector<long long> operations(n + 2);
    while (q--) {
        long long L, R, val;
        cin >> L >> R >> val;
        operations[L] += val;
        operations[R + 1] -= val;
    }
    for (long long i = 1; i <= n; i++) {
        operations[i] += operations[i - 1];
    }
    for (long long i = 1; i <= n; i++) {
        v[i] += operations[i];
    }
    for (long long i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}


// this is not my code it is said according to the video its take times more


































