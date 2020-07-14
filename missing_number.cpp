#include <bits/stdc++.h>
using namespace std;
int main(){
	long n;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	long sum = 0;
	int number;
	for(int i = 0; i < n-1; i++){
		cin >> number;
		sum += number;
	}
	cout << ((n+1)*n)/2-sum << endl;
}
