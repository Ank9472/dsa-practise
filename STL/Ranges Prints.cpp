#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
      long long n;
      cin>>n;
    vector<pair<long long, long long >> v;
    long long x, y;
    for(long long i=0; i< n ; i++)
   {    cin >> x >> y;
        v.push_back({x, y});
    }
    // sort(v.begin(), v.end());

  long long start = v[0].first, end = v[0].second;
    for (long long  i = 1; i < n; i++) {
        if (end >= v[i].first) {
            end = max(end, v[i].second);
        } else {
            cout << start << " " << end << endl;
            start = v[i].first;
            end = v[i].second;
        }
   
    }
     cout << start << " " << end << endl;
      return 0;
}
