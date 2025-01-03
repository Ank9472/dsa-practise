#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// bool cmp(const pair<string, long long>& p1, const pair<string, long long>& p2) {
    // if (p1.second > p2.second) {
        // return true; 
    // } else if (p1.second == p2.second) {
        // if (p1.first < p2.first) {
            // return true;
        // }
        // return false;
    // } else {
        // return false;
    // }
// }
int main() {
    int n;
    cin >> n;
    vector<pair<string, long long>> v;
    for (int i = 0; i < n; i++) {
        string s;
        long long x;
        cin >> s >> x;
        v.push_back({s, x});
    }

    sort(v.begin(), v.end()); 

    for (const auto& h : v) {
        cout << h.first << " " << h.second << endl;
    }

    return 0;
}

