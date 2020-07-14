#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	string card;
	map<char, int> cardMap;
	cardMap['A'] = 10;
	cardMap['Q'] = 10;
	cardMap['T'] = 10;
	cardMap['K'] = 10;
	cardMap['J'] = 10;
	cardMap['2'] = 2;
	cardMap['3'] = 3;
	cardMap['4'] = 4;
	cardMap['5'] = 5;
	cardMap['6'] = 6;
	cardMap['7'] = 7;
	cardMap['8'] = 8;
	cardMap['9'] = 9;

	for(int i = 0; i < N; i++){
		vector<string> pile;
		vector<string> top;
		for(int p = 0; p < 27; p++) {
			cin >> card;
			pile.push_back(card);	
		}
		for(int t = 0; t < 25; t++){
			cin >> card;
			top.push_back(card);
		}
		int X;
		int pos = pile.size()-1;
		int Y = 0;
		for(int c = 0; c < 3; c++){
			X = cardMap[pile.at(pos)[0]];
			Y += X;
			pos = pos-11+X;
		}
		if(Y > pos+1) {
			card = top.at(Y-pos-2);		
		}
		else {
			card = pile.at(Y-1);
		}
		cout << "Case " << i+1 << ": " << card << endl; 
	}
}
