#include <bits/stdc++.h>
using namespace std;
int main() {
	string card;
	vector<char> cardsT;
	vector<int> cardsNum;
	cardsT.push_back('A');
	cardsT.push_back('K');
	cardsT.push_back('Q');
	cardsT.push_back('J');
	cardsNum.push_back(2);
	cardsNum.push_back(1);
	cardsNum.push_back(0);
	vector<int> stopped(4);
	while(cin >> card) {
		vector<string> cards;
		cards.push_back(card);
		for(int i = 0; i < 12; i++) {
			cin >> card;
			cards.push_back(card);
		}
		vector<int> stopped(4);
		int pointsWith = 0;
		int points = 0;
		vector<int> suitsNum(4);
		for(int j = 0; j < 4; j++) {
			for(int k = 0; k < 13; k++) {
				if(j == 0) {
					if(cards[k][1] == 'S') {
						suitsNum[0] += 1;
					}
					else if(cards[k][1] == 'H') {
						suitsNum[1] += 1;
					}
					else if(cards[k][1] == 'D') {
						suitsNum[2] += 1;
					}
					else {
						suitsNum[3] += 1;
					}
				}
				if(cards[k][0] == cardsT[j]) {
					points += 4-j;
					pointsWith += 4-j;
					if(j > 0) {
						int num = 0;
						for(int t = 0; t < 13; t++) {
							if(t != k && cards[k][1] == cards[t][1]) {
								num++;
							}
						}
						if(num <= cardsNum[3-j]) {
							points--;
							pointsWith--;
						}
						else if(j != 3){
							if(cards[k][1] == 'S') {
		                        stopped[0] += 1;
				            }
						    else if(cards[k][1] == 'H') {
								stopped[1] += 1;
							}
							else if(cards[k][1] == 'D') {
								stopped[2] += 1;
							}
							else {
								stopped[3] += 1;
							}

						}
					}
					else {
						if(cards[k][1] == 'S') {
                                stopped[0] += 1;
                            }
                            else if(cards[k][1] == 'H') {
                                stopped[1] += 1;
                            }
                            else if(cards[k][1] == 'D') {
                                stopped[2] += 1;
                            }
                            else {
                                stopped[3] += 1;
                            }
					}
				}
			}
		}
		for(int o = 0; o < 4; o++) {
			if(suitsNum[o] == 1) {
				pointsWith += 2;
			}
			else if(suitsNum[o] == 2) {
				pointsWith += 1;
			}
			else if(suitsNum[o] == 0) {
				pointsWith += 2;
			}
		}
		bool stop = true;
		for(int i = 0; i < 4; i++) {
			if(stopped[i] == 0) {
				stop = false;
				break;
			}
		}
		if(points >= 16 && stop == true) {
			cout << "BID NO-TRUMP" << endl;
		}
		else if(pointsWith >= 14) {
			cout << "BID ";
			int val = *max_element(suitsNum.begin(), suitsNum.end());
			if(suitsNum[0] == val) {
				cout << "S" << endl;
			}
			else if(suitsNum[1] == val) {
				cout << "H" << endl;
			}
			else if (suitsNum[2] == val) {
				cout << "D" << endl;
			}
			else {
				cout << "C" << endl;
			}
		}
		else {
			cout << "PASS" << endl;
		}
	}
}
