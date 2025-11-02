#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int, int> ii;
typedef vector<int> vi;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vi premin(n), sufmax(n);
    premin[0] = a[0];
    sufmax[n-1] = a[n-1];
    for(int i = 1; i < n; i++){
      premin[i] = min(a[i], premin[i-1]);
      sufmax[n-1-i] = max(a[n-1-i], sufmax[n-i]);
    }
    for(int i = 0; i < n; i++){
      int minl = i-1 >= 0 ? min(a[i], premin[i-1]): a[i];
      int maxr = i+1 < n ? max(a[i], sufmax[i+1]): a[i];
      int ok = 0;
      ok |= i-1 >= 0 ? min(premin[i-1], maxr) == a[i] || max(premin[i-1], maxr) == a[i]: maxr == a[i];
      ok |= i+1 < n ? min(sufmax[i+1], minl) == a[i] || max(sufmax[i+1], minl) == a[i]: minl == a[i];
      if(ok) cout << '1';
      else cout << '0';
    }
    cout << '\n';
  }
  return 0;
}
