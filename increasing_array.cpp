#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	long turns = 0;
	cin >> n;
	long val;
	long prev_val;
	cin >> prev_val;
	for(int i = 1; i < n; i++){
		cin >> val;
		if(val < prev_val) {
			turns += prev_val-val;
			val = prev_val;
		}
		prev_val = val;
		
		
	}
	cout << turns << endl;
	return 0;
}
