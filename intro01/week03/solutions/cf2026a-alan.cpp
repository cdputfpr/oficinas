#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        vector<int> v(5);
        cin >> v[0] >> v[1] >> v[3] >> v[4];
        int mxfib = 0;
        for(int i = -100; i <= 100; i++){
            v[2] = i;
            int fibonacciness = 0;
            for(int i = 2; i < 5; i++){
                if(v[i-2] + v[i-1] == v[i]) fibonacciness++;
            }
            mxfib = max(mxfib, fibonacciness);
        }
        cout << mxfib << '\n';
    }
    return 0;
}