#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void spiral(ll x, ll y){
	if(x >= y){
		if(x%2 == 0){
			cout << x*x-y+1 << endl;
			return;
		}
		else {
			if(x == 1) {
				cout << 1*1+y-1 << endl;
				return;
			}
			cout << (x-1)*(x-1)+y << endl;
			return;
		}
	}
	else {
		if(y%2 == 0) {
			cout << (y-1)*(y-1)+x << endl;
			return;
		}
		else {
			cout << (y*y-x+1) << endl;
			return;
		}
	}
}
int main(){
	long n;
	cin >> n;
	ll x = 0;
	ll y = 0;
	for(int i = 0; i < n; i++){
		cin >> x;
		cin >> y;
		spiral(x, y);
	}
	return 0;
}
