#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n), t(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> t[i];

    int sum_1 = 0;
    for(int i = 0; i < n; ++i)
        if(t[i]) sum_1 += a[i];
    vector<int> pref_sum_0(n+1, 0);
    for(int i = 0; i < n; ++i) {
        if(t[i]) {
            pref_sum_0[i+1] = pref_sum_0[i];
        } else {
            pref_sum_0[i+1] = pref_sum_0[i]+a[i];
        }
    }
    int res = 0;
    for(int i = 0; i < n-k+1; ++i)
        res = max(res, sum_1+(pref_sum_0[i+k]-pref_sum_0[i]));
    cout << res << '\n';
    return 0;
}
