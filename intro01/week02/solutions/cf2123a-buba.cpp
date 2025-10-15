#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    string a, b, c;
    cin >> n >> a;
    cin >> m >> b >> c;
    for (int i = 0; i < m; i++) {
        if (c[i] == 'D') {
            a = a + b[i];
        }
        if (c[i] == 'V') {
            a = b[i] + a;
        }
    }
    cout << a << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
