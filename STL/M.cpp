#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
  set<long long>st;
    for (int i = 0; i < n; i++) {
    long long x;
        cin >> x;
        st.insert(x);
    }

    while (q--) {
        int y;
        cin >> y;

        auto ansl = st.lower_bound(y);
        cout << *ansl - 1 << " ";

        auto ans = st.upper_bound(y);
        if (ans == st.end()) {
            cout << 0 << endl;
        }
        else {
            cout << st.size() - *ans + 1 << endl;
        }
    }

    
    return 0;
}
