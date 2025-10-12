#include <bits/stdc++.h>
using namespace std;

int t, n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        long long tmp, sum = 0;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            sum += tmp;
        }
        long long sqr = sqrt(sum);
        if(sqr*sqr == sum) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}