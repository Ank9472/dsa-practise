#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<pair<long long, long long>> v(n);
    for (long long i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        v[i] = make_pair(a, b);
        cout<<v[i]<<endl;
    }


    return 0;
}
