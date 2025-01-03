#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    string s = "hello";
    int i = 0;
    int n = str.size();
   
    for (int j = 0; j < n ; j++) {
        if (str[j] == s[i]) {
            i++;
            if (i == n) {  
                break;
            }
        }
    }

    
    if (i == n) {  
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}


























