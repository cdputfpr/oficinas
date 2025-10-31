#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j) cin >> a[i][j];

        vector<int> min_diag(2*n - 1, 0);
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j)
                min_diag[i-j+n-1] = min(min_diag[i-j+n-1], a[i][j]);
        }
        int res = 0;
        for(int i = 0; i < 2*n - 1; ++i) res -= min_diag[i];
        cout << res << '\n';
    }
    return 0;
}
