#include <bits/stdc++.h>

using namespace std;

const int INF = 1e7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];

        int res = 0, min_r = INF;
        for(int i = n-1; i >= 0; --i) {
            if(a[i] > min_r) ++res;
            min_r = min(min_r, a[i]);
        }
        cout << res << '\n';
    }
    return 0;
}
