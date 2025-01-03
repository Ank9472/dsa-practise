#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
  vector<vector<int>> v(N, vector<int>(M))


for (int i = 0; i < N; i++) 
  { for (int j = 0; j < M; j++) 
 { 
cin >> v[i][j];
int x;
    cin >> x;
    bool found = false;
 if (v[i][j] == x)
     found = true;
if (found ) {
          cout << "would not take number" << endl;
             
        } else {
            cout << "would take number" << endl;
         
        }
   }
     }
    return 0;
}
