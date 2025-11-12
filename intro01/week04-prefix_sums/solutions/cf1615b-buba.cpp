#include "bits/stdc++.h"
#define MAXR 200000
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<vector<int>> ps(20, vector<int>(MAXR + 1));
    for (int i = 0; i < 20; i++) {
        int x = 1 << i;
        for (int j = 1; j <= MAXR; j++) {
            ps[i][j] = ps[i][j - 1] + ((j & x) == 0);
        }
    }
    while (t--) {
        int l, r;
        cin >> l >> r;
        int ans = INT32_MAX;
        for (int i = 0; i < 20; i++) {
            int x = 1 << i;
            int minDeleted = ps[i][r] - ps[i][l - 1];
            ans = min(ans, minDeleted);
        }
        cout << ans << "\n";
    }

    return 0;
}
