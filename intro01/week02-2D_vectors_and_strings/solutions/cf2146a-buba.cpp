#include <bits/stdc++.h>
#include <vector>
#define int long long

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> freq(n + 1);
    int max_freq = 0;
    for (int &ai : a) {
        cin >> ai;
        freq[ai]++;
        max_freq = max(max_freq, freq[ai]);
    }
    int ans = 0;
    for (int f = 1; f <= max_freq; f++) {
        int k = 0;
        for (int i = 1; i <= n; i++) {
            if (freq[i] >= f) {
                k++;
            }
        }
        ans = max(ans, f * k);
    }
    cout << ans << "\n";
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
