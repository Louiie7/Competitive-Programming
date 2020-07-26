#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
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

    vector<string> deck;
    vector<string> top25;
    string card;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 52; j++) {
            cin >> card;
            deck.push_back(card);
        }
        top25 = vector<string>(deck.begin()+26, deck.end());
        int currPos = 26;
        int Y = 0;
        for(int c = 0; c < 3; c++) {
            int X = cardMap[deck[currPos][0]];
            Y += X;
            currPos += -(10-X)-1;
        }
        string answer;
        if(Y > currPos+1) {
            answer = top25[Y-currPos-1];
        }
        else {
            answer = deck[Y-1];
        }
        cout << "Case " << i+1 << ": " << answer << endl;
        deck.clear();
        top25.clear();
    }
}
