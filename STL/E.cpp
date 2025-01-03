#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;

    vector<long long> v(n + 1);
    for (long long i = 1; i <= n; i++) cin >> v[i];

    vector<long long> prefSum(n + 1);

    for (long long i = 1; i <= n; i++) {
        prefSum[i] = prefSum[i - 1] + v[i];
    }

    while (q--) {
        long long L, R;
        cin >> L >> R;
        cout << prefSum[R] - prefSum[L - 1] << endl;
    }

    return 0;
}
