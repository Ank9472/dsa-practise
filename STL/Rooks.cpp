#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long n, q, t;
    cin >> n >> q;  // Input size of matrix (n x n) and number of queries
    
    // Initialize 2D vector with size n x n, filled with zeros
    vector<vector<long long>> v(n, vector<long long>(n, 0));

    while (q--) {  // Process q queries
        cin >> t;  // Query type
        if (t == 1) {
            long long a, b,R;
             // Character to be placed in the matrix
            cin >> a >> b ;  // Input row, column, and character
            
            // Check if indices are within bounds (0-based indexing)
            if (a >= 0 && a < n && b >= 0 && b < n) {
                v[a][b] = R ;  // Place character in the matrix
            } else {
                cout << "Index out of bounds" << endl;
            }
        }
        // Add other query types here if needed
    }
    
    return 0;
}
