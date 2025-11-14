#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    a = vector<int>(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int max_buy = 1e9;
    long long ans = 0;
    for(int i = n-1; i >= 0; i--){
        int buy = min(a[i], max_buy);
        ans += buy;
        max_buy = (buy ? buy-1: 0);
    }
    cout << ans << '\n';
    return 0;
}