#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long N, Q;
    cin >> N >> Q;
    string S(N, ' ');  

    for (int i = 0; i < N; i++) { 
        cin >> S[i];
    }
     while (Q--) {
        string m;
        cin >> m;  
          if (m == "substr") {
            long long a, b;
            cin >> a >> b;
            if (a > b) {
                swap(a, b);
            }
            cout << S.substr(a, b-a+1) << endl;  
        } else if (m == "sort") {
            long long a, b;
            cin >> a >> b;
            if (a > b) {
                swap(a, b);
            }
            sort(S.begin() + (a-1), S.begin() + b);  
           } else if (m == "pop_back") {
            S.pop_back();
            } else  if (m == "back") {
            cout << S.back() << endl;
              } else if (m == "reverse") {
            long long a, b;
            cin >> a >> b;
            if (a > b) {
                swap(a, b);
            }
            reverse(S.begin() + (a-1), S.begin() + b);  
              } else if (m == "front") {
            cout << S.front() << endl;
            }else if (m == "X") {
                 char c;
                 cin >> c;
                 S.push_back(c);
               }
        else {
          long long pos;
            cin >> pos;
            cout << S[pos-1] << endl;  
        }
    }
     return 0;
}
