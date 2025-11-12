#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vn(n);
        for(auto &a: vn) cin >> a;

        int m;
        cin >> m;
        vector<int> vm(m);
        for(auto &a: vm) cin >> a;

        vector<int> ps_n(n+1, 0), ps_m(m+1, 0);
        for(int i=1; i<=n; i++){
            ps_n[i]=ps_n[i-1]+vn[i-1];
        }
        for(int i=1; i<=m; i++){
            ps_m[i]=ps_m[i-1]+vm[i-1];
        }

        int ans=0;
        ans = *max_element(ps_n.begin(), ps_n.end()) + *max_element(ps_m.begin(), ps_m.end());

        cout << ans << "\n";
    }

    return 0;
}
