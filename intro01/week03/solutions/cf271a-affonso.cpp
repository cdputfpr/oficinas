#include <bits/stdc++.h>
using namespace std;

#define int long long

bool distinct(int y){
    string s = to_string(y);
    return set<char>(s.begin(), s.end()).size() == (int)s.size();
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y; 
    cin >> y;
    int ans = y + 1;
    while(!distinct(ans)) ++ans;
    cout << ans << "\n";
    return 0;
}

