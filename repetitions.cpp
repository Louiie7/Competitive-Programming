#include <bits/stdc++.h>
using namespace std;
int main(){
	int maxVal = 1;
	int count = 1;
	string dna;
	cin >> dna;
	char prev_char;
	prev_char = dna[0];
	for(int i = 1; i < dna.length(); i++){
		count++;
		if(prev_char != dna[i]){
			prev_char = dna[i];
			count = 1;
		}
		maxVal = max(maxVal, count);
	}

	cout << maxVal << endl;

	return 0;
}
