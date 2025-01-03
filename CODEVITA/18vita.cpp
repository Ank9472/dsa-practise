#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr;
    int n;
    cin >> n;

    if (n == 0) { // Use '==' for comparison
        return 0;
    }

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) { // Add braces to enclose statement properly
            cout << i ; // Output the divisor
        }
    }

    return 0;
}

