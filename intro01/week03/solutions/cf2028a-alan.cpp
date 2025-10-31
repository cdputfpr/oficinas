#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--){
    int n, a, b;
    string moves;
    cin >> n >> a >> b >> moves;
    int maxMoves = 100;
    int x = 0, y = 0, ok = 0;
    while (maxMoves-- && !ok){
      for (int i = 0; i < n && !ok; i++){
        if (moves[i] == 'N') y++;
        else if (moves[i] == 'S') y--;
        else if (moves[i] == 'E') x++;
        else x--;
        if (x == a && y == b) ok = 1;
      }
    }
    if (ok || (a == 0 && b == 0)) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}