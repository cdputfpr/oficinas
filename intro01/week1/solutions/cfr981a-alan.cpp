#include <bits/stdc++.h>
using namespace std;

int t, n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        int pos = 0, player = 0;
        for(int i = 1; pos >= -n && pos <= n; i+=2){
            pos += i * (player ? 1: -1);
            player = (player ? 0: 1);
        }
        // pessoas estão invertidas pois na última iteração o player inverte para o próximo player
        cout << (player ? "Sakurako": "Kosuke") << '\n';
    }
    return 0;
}