#include <bits/stdc++.h>
using namespace std;

string s;
vector<int> freq;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freq = vector<int>(26);
    for(int i = 0; i < 3; i++){
        cin >> s;
        int n = s.length();
        for(int j = 0; j < n; j++){
            if(i == 2) freq[s[j]-'A']--;
            else freq[s[j]-'A']++;
        }
    }
    for(int i = 0; i < 26; i++){
        if(freq[i]){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}