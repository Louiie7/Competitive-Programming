#include <bits/stdc++.h>
using namespace std;


int main() {
    map<char, int> eval;
    eval['A'] = 4;
    eval['K'] = 3;
    eval['Q'] = 2;
    eval['J'] = 1;
    eval['T'] = 0;
    eval['9'] = 0;
    eval['8'] = 0;
    eval['7'] = 0;
    eval['6'] = 0;
    eval['5'] = 0;
    eval['4'] = 0;
    eval['3'] = 0;
    eval['2'] = 0;


    map<char, int> suits;
    suits['S'] = 0;
    suits['H'] = 1;
    suits['D'] = 2;
    suits['C'] = 3;
    char first[3];
    string card;
    int handVal;
    int extra;
    vector<int> suitNumber;
    vector<string> hand;
    vector<bool> stopped;
    while(scanf("%s", first) != EOF) {
        card = first;
        handVal = eval[card[0]];
        extra = 0;
        hand.push_back(card);
        suitNumber.push_back(0);
        suitNumber.push_back(0);
        suitNumber.push_back(0);
        suitNumber.push_back(0);
        stopped.push_back(false);
        stopped.push_back(false);
        stopped.push_back(false);
        stopped.push_back(false);
        suitNumber[suits[card[1]]] += 1;
        for(int i = 0; i < 12; i++) {
            cin >> card;
            handVal += eval[card[0]];
            suitNumber[suits[card[1]]] += 1;
            hand.push_back(card);
        }
        for(int j = 0; j < 13; j++) {
            card = hand[j];
            char suit = card[1];
            int nSuit = 0;
            if(card[0] == 'K') {
                if(suitNumber[suits[suit]] == 1) {
                    handVal -= 1;
                }
                else {
                    stopped[suits[suit]] = true;
                }
            }
            else if(card[0] == 'Q') {
                if(suitNumber[suits[suit]] < 3) {
                    handVal -= 1;
                }
                else {
                    stopped[suits[suit]] = true;
                }

            }
            else if (card[0] == 'J') {
                if(suitNumber[suits[suit]] < 4) {
                    handVal -= 1;
                }
            }
            else if (card[0] == 'A') {
                stopped[suits[suit]] = true;
            }
        }
        for(int i = 0; i < 4; i++) {
            if (suitNumber[i] == 0) {
                extra += 2;
            }
            else if (suitNumber[i] == 1) {
                extra += 2;
            }
            else if (suitNumber[i] == 2) {
                extra += 1;
            }
        }

        if(handVal+extra < 14) {
            cout << "PASS" << endl;
        } 
        else if(((stopped[0] && stopped[1]) && (stopped[2] && stopped[3])) && (handVal > 15)) {
            cout << "BID NO-TRUMP" << endl;   
        }
        else { 
            int S = suitNumber[0];
            int H = suitNumber[1];
            int D = suitNumber[2];
            int C = suitNumber[3];
            if(S >= D && S >= C && S >= H) {
                cout << "BID S" << endl;
            }
            else if(H >= D && H >= C && H >= S) {
                cout << "BID H" << endl;
            }
            else if(D >= S && D >= C && D >= H) {
                cout << "BID D" << endl;
            }
            else {
                cout << "BID C" << endl;
            }
        }
        hand.clear();
        stopped.clear();
        suitNumber.clear();
        
    } 
}

