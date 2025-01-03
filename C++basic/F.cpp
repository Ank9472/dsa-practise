#include <bits/stdc++.h>
using namespace std;
#define arr(v).begin, v.end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define mod 1000000007

const int N = 2e5 + 5;

vector<vector<long long>> adj(N);
vector<int> vis(N);
vector<long long> col(N, -1);

int n, m, k, a, b, c, x, y, z, d,l1;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};


vector<l1> sieve(int n) {
    int* arr = new int[n + 1]();
}

long long binpow(long long a, long long b, long long m) {
   

void solution() {
    l1 t;
    cin >> t;
    while (t--) {
        l1 n;
        cin >> n;
        vector<l1> v(n);
        for (l1 i = 0; i < n; i++) {
            cin >> v[i];
        }
        l1 x;
        cin >> x;
        l1 pos = -1;
        for (l1 i = 0; i < n; i++) {
            if (v[i] == x) {
                pos = i;
                break;
            }
        }
        cout << pos << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}
}