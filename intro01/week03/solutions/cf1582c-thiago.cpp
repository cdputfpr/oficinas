#include <bits/stdc++.h>

using namespace std;

const int INF = 1e6;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        int min_erased = INF;
        for(char ch = 'a'; ch <= 'z'; ++ch) {
            int erased = 0, l = 0, r = n-1;
            while(l < r) {
                if(s[l] == s[r]) {
                    ++l, --r;
                } else if(s[l] == ch) {
                    ++erased, ++l;
                } else if(s[r] == ch) {
                    ++erased, --r;
                } else {
                    break;
                }
            }
            if(!(l < r)) min_erased = min(min_erased, erased);
        }
        if(min_erased == INF) {
            cout << -1 << '\n';
        } else {
            cout << min_erased << '\n';
        }
    }
    return 0;
}
