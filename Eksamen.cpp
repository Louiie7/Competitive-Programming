#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> times;
	int N, D, P, currTime;
	int sum = 0;
	cin >> N >> D >> P;
	if(D >= P*N) {
		cout << P*N << endl;
	}
	else if(D < P){
		cout << 0 << endl;
	}
	else {
		
		for(int i = 0; i < N; i++){
			cin >> currTime;
			times.push_back(currTime);
		}
		int curr = 0;
		sort(times.begin(), times.end());
		while(D-times.at(curr)) {
			sum += P;
			currPlace++;
			if(times.size()-1){
				break;
			}
		}
		cout << sum;
	}
	
}
