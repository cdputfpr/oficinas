#include <bits/stdc++.h>
using namespace std;

int t;
vector<string> mat = vector<string>(3);
vector<int> freq;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        for(int i = 0; i < 3; i++){
            cin >> mat[i];
        }
        int r = -1;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(mat[i][j] == '?') r = i;
            }
        }
        freq = vector<int>(3);
        for(int i = 0; i < 3; i++){
            if(mat[r][i] == '?') continue;
            freq[mat[r][i]-'A']++;
        }
        for(int i = 0; i < 3; i++){
            if(freq[i] == 0) cout << (char)('A' + i) << '\n';
        }
    }
    return 0;
}