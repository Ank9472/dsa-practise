#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    

    int arr[n];

    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bool found = false; 
    
    
    for(int i = 0, j = n - 1; i <= j; i++, j--) {
        if (arr[i] == arr[n / 2] && arr[j] == arr[n / 2]) {
            found = true;
            break;
        }
    }
    
    if (found) {
        cout <<"YES" << endl;
    } else {
        cout <<"NO" << endl;
    }

    return 0;
}

