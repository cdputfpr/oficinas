#include <bits/stdc++.h>

using namespace std;

using ii = pair<int, int>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<ii> p(n);
        for(int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            p[i] = {-(a%k == 0 ? k : a%k), i};
        }
        sort(p.begin(), p.end());
        for(int i = 0; i < n; ++i)
            cout << p[i].second+1 << (i < n-1 ? ' ' : '\n');
    }
    return 0;
}
