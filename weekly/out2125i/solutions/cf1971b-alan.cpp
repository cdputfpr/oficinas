#include <bits/stdc++.h>
using namespace std;

int t;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        int n = s.length();
        if(n == 1){
            cout << "NO\n";
            continue;
        }
        char a = s[0];
        int ok = 0;
        for(int i = 1; i < n && !ok; i++){
            if(s[i] != a){
                s[0] = s[i];
                s[i] = a;
                ok = 1;
            }
        }
        if(ok) cout << "YES\n" << s << '\n';
        else cout << "NO\n";
    }
    return 0;
}