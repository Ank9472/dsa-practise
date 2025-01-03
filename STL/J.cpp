#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

// Comparator function for tuples
bool cmp(const tuple<string, long long>& t1, 
         const tuple<string, long long>& t2) {
    if (get<1>(t1) > get<1>(t2)) {
        return true;
    } else if (get<1>(t1) == get<1>(t2)) {
        if (get<0>(t1) < get<0>(t2)) {
            return true;
        }
        return false;
    } else {
        return false;
    }
}

int main() {
    long long n;
    cin >> n;
    vector<tuple<string,  long long, long long, long long, long long,long long >> v;

    for (int i = 1; i <= n; i++) {
        string s;
        long long A, M, S, E, T;
        cin >> s >> A >> M >> S >> E;
        T = A + M + S + E;
        v.push_back(make_tuple(s, T, A, M, S, E));
    }

    sort(v.begin(), v.end(), cmp);

    for (const auto& x : v) {
  cout << get<0>(x) << get<1>(x) << " " << get<2>(x) << " " << get<3>(x) << " " << get<4>(x) << " " << get<5>(x) <<endl;

    }

    return 0;
}


