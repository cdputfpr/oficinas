#include <bits/stdc++.h>
using namespace std;

int t, n;
string s;

int vowel(char c){
    return (c == 'a' || c == 'e');
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> s;
        for(int i = 0; i < n; i++){
            if(i+1 >= n) cout << s[i];
            else if(!vowel(s[i]) && vowel(s[i+1])){
                if(i != 0) cout << '.';
                cout << s[i] << s[i+1];
                i++;
            }
            else{
                cout << s[i];
            }
        }
        cout << '\n';
    }
    return 0;
}