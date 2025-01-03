#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>

int main() {
    int C;
    std::cin >> C;

    std::unordered_map<double, int> D;
    long long collision = 0;
{
    for (int i = 0; i < C; i++) {
        int x, y, speed;
        std::cin >> x >> y >> speed;

        double sq_time = static_cast<double>(x * x + y * y) / (speed * speed);

        if (D.find(sq_time) == D.end()) {
            D[sq_time] = 1;
        } else {
            D[sq_time]++;
        }
    }

    for (const auto& pair : D) {
        if (pair.second != 1) {
            collision += (static_cast<long long>(pair.second) * (pair.second - 1)) / 2;
        }
    }

    std::cout << collision << std::endl;
}
    return 0;
}

// save it and next debug then apply code