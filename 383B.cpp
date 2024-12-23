#include <bits/stdc++.h>
using namespace std;
int main() {
    int H, W, D;
    cin >> H >> W >> D;

    vector<string> S(H);
    for(int i = 0; i < H; i++){
            cin >> S[i];
    }

    int max_count = 0;

    vector<pair<int, int>> dots;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '.') {
                dots.emplace_back(i, j);
            }
        }
    }

    for (size_t i = 0; i < dots.size(); i++) {
        for (size_t j = i + 1; j < dots.size(); j++) {
            int x1 = dots[i].first, y1 = dots[i].second;
            int x2 = dots[j].first, y2 = dots[j].second;

            int count = 0;

            for (const auto& dot : dots) {
                int t = dot.first, u = dot.second;
                if ((abs(t - x1) + abs(u - y1)) <= D || (abs(t - x2) + abs(u - y2)) <= D) {
                    count++;
                }
            }

            max_count = max(max_count, count);
        }
    }
    
    cout << max_count << endl;
    return 0;
    
}
