#include <bits/stdc++.h>
using namespace std;

int k, r;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> k >> r;
    int ans = 1, b = k;
    while(b%10 != r && b%10 != 0){
        b += k;
        ans++;
    }
    cout << ans << '\n';
    return 0;
}