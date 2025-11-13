#include "bits/stdc++.h"

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    int ans = 0;
    int i = 0;
    int j = 0;
    while (i < n) {
        while (j < n && a[j] * (j - i + 1) < x) j++;
        if (j == n) {
            cout << ans << "\n";
            return;
        }
        ans++;
        i = j = j + 1;
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
