#include <bits/stdc++.h>
using namespace std;
int main(){
	int N, workload;
	int sum = 0;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> workload;
		sum += workload;
	}
	cout << sum << endl;
}
