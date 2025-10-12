#include <bits/stdc++.h>
using namespace std;

int t, n;
vector<int> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        a = vector<int>(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int mn = 10;
        for(int i = 0; i < n; i++){
            mn = min(mn, a[i]);
        }
        int mult = 1;
        for(int i = 0; i < n; i++){
            if(a[i] == mn){
                a[i]++;
                mn = 10;
            }
            mult *= a[i];
        }
        cout << mult << '\n';
    }
    return 0;
}