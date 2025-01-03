#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    vector<long long> ar(n);

    for (long long i = 0; i < n; i++) {
        cin >> ar[i];
    }

    vector<long long> br(n);

    for (long long j = 0; j < n; j++) {
        cin >> br[j];
    }

    vector<long long> diff(n);

    for (long long i = 0; i < n; i++) {
        diff[i] = ar[i] - br[i];
    }

    sort(diff.begin(), diff.end());

    long long cnt = 0;
    for (long long i = 0; i < diff.size(); i++) {
        if (diff[i] <= 0) {
            continue;
        }
        auto pos = upper_bound(diff.begin(), diff.end(), -diff[i]);
        cnt += i - (pos - diff.begin());
    }

    cout << cnt << endl;

    return 0;
}
