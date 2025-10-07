#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int seq = 0, points = 0;
    int r;
    for(int i = 0; i < n; i++){
        cin >> r;
        if(r == 1){
            seq++;
            points++;
            if(seq >= 3) points++;
        }
        else{
            seq = 0;
            points--;
        }
    }
    cout << points << '\n';
    return 0;
}