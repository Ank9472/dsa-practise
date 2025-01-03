#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    string s;
 
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    while (q--) {
            string S;
            cin >> S;
       
            if (S == "prev_permutation") {
            long long X;
            cin >> X;
            if(X==1)
            {
            for (int i = 0; i < n; i++) {
            cout<< s[i];
                }
            }
            while(X>1)
            {
              prev_permutation(s.begin(), s.end() +1);
              X--;
            }
            for (int i = 0; i < n; i++) 
            cout<<s<<endl;
            } else if (S == "next_permutation") {
            long long X;
            cin >> X;
             if(X==n)
            {
            for (int i = 0; i < n; i++) {
            cout<< s[i];
                }
            }
            while(X>=0)
            {
            next_permutation(s.begin(),s.end() + 1);
            X--;
            }
            for (int i = 0; i < n; i++)
              cout<<s<<endl;
        }
    }
        return 0;
}
