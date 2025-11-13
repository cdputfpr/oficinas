#include <bits/stdc++.h>
using namespace std;

int t, n;
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> s;
        int max_seq = 0, seq = 0, sum = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '#') seq = 0;
            else{
                seq++;
                max_seq = max(max_seq, seq);
                sum++;
            }
        }
        if(max_seq < 3) cout << sum << '\n';
        else cout << "2\n";
    }
    return 0;
}