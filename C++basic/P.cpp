#include<bits/stdc++.h>
#include<string.h>

using namespace std;
 if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
    return true;
}
else {
    return false;
}
 int main() {



void solution() {
    string s;
    getline(cin, s);
    
    bool flag = false;
    int cnt = 0;

    for(int i = 0; i < s.size(); i++) {
        if (check(s[i])) {
            if (!flag) {
                cnt++;
                flag = true;
            }
        } else {
            flag = false;
        }
    }
     cout << cnt << endl;
     }
    
   
    
    return 0;
}
