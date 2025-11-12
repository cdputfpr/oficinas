#include "bits/stdc++.h"
#define int long long

using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> ps(n + 1);
        for (int i = 1; i <= n; i++) {
            ps[i] = ps[i - 1] + a[i - 1];
        }
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            int newSum = ps[l - 1] + ((r - l + 1) * k) + (ps[n] - ps[r]);
            if (newSum % 2 == 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
