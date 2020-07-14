#include <bits/stdc++.h>
using namespace std;
void seq(int n, int number){
	for(int i = n-number; i >= 1; i -= 2){
		cout << i << " "; 
	}
}
int main(){
	int n;
	cin >> n;
	if(n == 1) {
		cout << 1;
	}
	else if(n < 4){
		cout << "NO SOLUTION";
	}
	else if(n%2 == 0) {
		seq(n, 1);
		seq(n, 0);
	}
	else {
	    seq(n, 1);
		cout << n << " ";
		seq(n, 2);
	}
	cout << endl;
}
