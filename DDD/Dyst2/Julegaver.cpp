#include <bits/stdc++.h>
using namespace std;
int main(){
	int anna_gaver;
	int laura_gaver;
	int oscar_gaver;
	cin >> anna_gaver;
	cin >> laura_gaver;
	cin >> oscar_gaver;
	vector<string> sure;
	if(anna_gaver < oscar_gaver && anna_gaver < laura_gaver) {
		sure.push_back("Anna");
	}
	if(oscar_gaver < anna_gaver || oscar_gaver < laura_gaver) {
		sure.push_back("Oscar");
	}
	if(laura_gaver < anna_gaver) {
		sure.push_back("Laura");
	}
	sort(sure.begin(), sure.end());
	for(int i = 0; i < sure.size(); i++) {
		cout << sure[i] << endl;
	}
	if(sure.size() == 0) {
		cout << "INGEN" << endl;
	}
}
