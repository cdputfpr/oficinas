#include <bits/stdc++.h>
using namespace std;

int t, a, b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a >= b) cout << a << '\n';
        else if(b-a < a) cout << a-(b-a) << '\n';
        else cout << "0\n";
    }
    return 0;
}