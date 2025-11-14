#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    int res = 0, sum = 0;
    for(int i = n-1; i >= 0 && sum < m; --i) {
        ++res;
        sum += a[i];
    }
    cout << res << '\n';
    return 0;
}
