//  main barbad hu puri tarah se '

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<vector<int>> l;
    vector<int> participant; // mere hissab se  s jo ki step ko wah imporant hain

    // Reading input and processing each participant's steps
    for (int i = 0; i < n; i++) {  //n constant hoga but step alag hain 
        vector<int> k(t + 1);  // yaha ek array create hoga unit(step)
        for (int j = 0; j < t + 1; j++) {
            cin >> k[j];
        }
        int d = k.back(); // Multiplier
        k.pop_back(); // Remove the last element

        vector<int> w;
        int sum1 = 0;
        for (int step : k) {
            int q = step * d;
            sum1 += q;
            w.push_back(sum1);
        }
        l.push_back(w);
    }

    // Transpose the list l to group by step index
    vector<vector<int>> g(t);
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n; j++) {
            g[i].push_back(l[j][i]);
        }
    }

    // Find the participant with the maximum score at each odd index
    for (int i = 1; i < g.size(); i += 2) {
        int m = *max_element(g[i].begin(), g[i].end());
        for (int j = 0; j < g[i].size(); j++) {
            if (g[i][j] == m) {
                participant.push_back(j + 1);
            }
        }
    }

    // Count occurrences of each participant
    map<int, int> res;
    for (int p : participant) {
        res[p]++;
    }

    // Find the participant with the maximum count
    int max_count = 0;
    int result = -1;
    for (const auto& entry : res) {
        if (entry.second > max_count) {
            max_count = entry.second;
            result = entry.first;
        }
    }

    cout << result << endl;

    return 0;
}


 // can't understand  tough side