#include <bits/stdc++.h>

using namespace std;

const int INF = 1e7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> t(n);
    for(int i = 0; i < n; ++i) cin >> t[i];

    bool any_zero_row = false;
    string zero_row(m, '0');
    for(int i = 0; i < n && !any_zero_row; ++i)
        if(t[i] == zero_row) any_zero_row = true;
    if(any_zero_row) {
        cout << -1 << '\n';
        return 0;
    }

    vector<int> sum_dist(m, 0);
    for(int i = 0; i < n; ++i) {
        vector<int> dist(m);
        int l = m-1;
        while(t[i][l] != '1') --l;
        for(int j = 0; j < m; ++j) {
            if(t[i][j] == '1') l = j;
            dist[j] = (j+m-l)%m;
        }
        int r = 0;
        while(t[i][r] != '1') ++r;
        for(int j = m-1; j >= 0; --j) {
            if(t[i][j] == '1') r = j;
            dist[j] = min(dist[j], (r+m-j)%m);
        }
        for(int j = 0; j < m; ++j)
            sum_dist[j] += dist[j];
    }
    int res = INF;
    for(int j = 0; j < m; ++j) res = min(res, sum_dist[j]);
    cout << res << '\n';
    return 0;
}
