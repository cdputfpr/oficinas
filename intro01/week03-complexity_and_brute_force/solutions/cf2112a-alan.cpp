#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a, x, y;
        cin >> a >> x >> y;
        int dx = abs(a-x), dy = abs(a-y);
        int ok = 0;
        for(int i = 1; i < 100; i++){
            if(abs(i-x) < dx && abs(i-y) < dy) ok = 1;
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}