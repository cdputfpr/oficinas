#include <bits/stdc++.h>
using namespace std;

int t, x, n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> x >> n;
        if(n%2 == 0) cout << "0\n";
        else cout << x << '\n';
    }
    return 0;
}