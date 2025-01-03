#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    vector<long long> v(n + 1);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }

    while (q--) {
        string s;
        cin >> s;
        if (s == "sort") {
            long long a, b;
            cin >> a >> b;
            if (a > b) {
                swap(a, b);
            }
       
            sort(v.begin() + a, v.begin() + b + 1);
        } else if (s == "pop_back") {
            v.pop_back();
        } else if (s == "back") {
            cout << v.back() << endl;
        } else if (s == "reverse") {
            long long a, b;
            cin >> a >> b;
            if (a > b) {
                swap(a, b);
            }
              while(a<b)
             { 
              reverse(v.begin() + a, v.begin() + b + 1 );
               a++;
               b--;
             }
        } else if (s == "front") {
            cout << v.front()<< endl;
        } else if (s == "push_back") {
            long long value;
            cin >> value;
            v.push_back(value);
        } else if (s == "print") {
            long long a;
            cin >> a;
            cout << v[a] << endl;
        }
    }
    return 0;
}



 