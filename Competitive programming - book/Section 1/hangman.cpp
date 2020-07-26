#include <bits/stdc++.h>
using namespace std;

int main(){
    int round;
    string answer;
    string guess;
    vector<char> guessed;
    while(cin >> round && round != -1) {
        cin >> answer;
        cin >> guess;
        cout << "Round " << round << endl;
        bool done = false;
        int idx = 0;
        int curr = 0;
        int wrong = 0;
        while(!done) {
            int w = 1;
            int diff = 0;
            for(int i = 0; i < answer.length(); i++) {
                if(answer[i] == guess[idx]) {
                    w = 0;
                    diff += 1;
                }
            }
            if(guessed.size() == 0) {
                guessed.push_back(guess[0]);
            }
            else {
                bool used = false;
                for(int i = 0; i < guessed.size(); i++) {
                    if(guess[idx] == guessed[i]) {
                        w = 0;
                        used = true;
                        diff = 0;
                        break;
                    }
                }
                if(!used) {
                    guessed.push_back(guess[idx]);
                }
            }
            curr += diff;
            wrong += w;
            if(wrong == 7) {
                cout << "You lose." << endl;
                done = true;
            }
            else if(curr == answer.length()) {
                cout << "You win." << endl;
                done = true;            
            }
            else if(idx == guess.length()-1) {
                cout << "You chickened out." << endl;
                done = true;


            }
            idx++;
        }
        guessed.clear();
    }
    


    
}
