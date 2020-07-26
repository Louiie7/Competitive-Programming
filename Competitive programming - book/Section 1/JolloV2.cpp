#include <bits/stdc++.h>
using namespace std;

int main() {
    int card;
    vector<int> sister;
    vector<int> brother;
    while(cin >> card && card != 0) {
        sister.push_back(card);
        for(int i = 0; i < 4; i++) {
            cin >> card;
            if(i < 2) {
                sister.push_back(card);
            }
            else {
                brother.push_back(card);
            } 
        }
        sort(sister.begin(), sister.end(), greater <int>());
        sort(brother.begin(), brother.end(), greater <int>());
        int lowest = 1;
        if(brother[0] > sister[0]) {
            if(brother[1] < sister[0] && brother[1] < sister[1]) {
                lowest = sister[0]+1;
            }
            else if(brother[1] < sister[0]) {
                lowest = sister[1]+1;
            }
            else if(brother[1] < sister[2]) {
                lowest = -1;
            } 

        }   
        else {
            if(brother[1] < sister[1]) {
                lowest = -1;
            } 
            else {
                lowest = sister[1]+1;
            }
        }
        int answer = -1;
        
        if(lowest != -1) {
            for(int i = lowest; i < 53; i++) {
                bool taken = false;
                for(int j = 0; j < 3; j++) {
                    if(sister[j] == i) {
                        taken = true;
                        break;
                    }
                }       
                for(int t = 0; t < 2; t++) {
                    if(brother[t] == i) {
                        taken = true;
                        break;
                    }

                }
                if(!taken) {
                    answer = i;
                    break;
                }
            }
        }
        cout << answer << endl;
        sister.clear();
        brother.clear();
    } 
}
