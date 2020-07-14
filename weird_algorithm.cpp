#include <bits/stdc++.h>
using namespace std;
void weird_algorithm(long n){
	if(n == 1){
		cout << 1 << " ";
		return;
	}
	else if(n % 2 == 0){
		cout << n << " ";
		n /= 2;
		weird_algorithm(n);
	}
	else {
		cout << n << " ";
		n = n*3 + 1;
		weird_algorithm(n);
	}
}
int main(){
	long n;
	cin >> n;
	weird_algorithm(n);
	cout << endl;
	return 0;
}


