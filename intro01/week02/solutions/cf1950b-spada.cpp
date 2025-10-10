#include <bits/stdc++.h>

using namespace std;

void reverse_ch(char &ch){
	if(ch=='.'){
		ch='#';
	}
	else{
		ch='.';
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		vector<vector<char>> mtx(2*n, vector<char>(2*n));

		char strt_char = '#', curr_char;
		for(int i=0; i<2*n; i++){
			if(i>0 && i%2==0){
				reverse_ch(strt_char);
			}
			curr_char = strt_char;

			for(int j=0; j<2*n; j++){
				if(j>0 && j%2==0){
					reverse_ch(curr_char);
				}
				mtx[i][j] = curr_char;
			}
		}

		for(int i=0; i<2*n; i++){
			for(int j=0; j<2*n; j++){
				cout << mtx[i][j];
			}
			cout << "\n";
		}
	}

	return 0;
}
