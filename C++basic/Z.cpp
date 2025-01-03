
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    int arr[N + 1];  

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }
    
    sort(arr , arr + N);  

    while (Q--) {
        int X;
        cin >> X;

        int start = 1, end = N;
        bool found = false;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == X) {
                found = true;
                break;
            } else if (arr[mid] > X) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        if (found) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}

	
    