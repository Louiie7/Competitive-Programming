#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, B, H, W;
    while(cin >> N >> B >> H >> W) {
        int lowestPrice = B+1;
        for(int i = 0; i < H; i++) {
            int pricePersonInput;
            cin >> pricePersonInput;
            int bedsInput;
            for(int j = 0; j < W; j++) {
                cin >> bedsInput;
                int currPrice = pricePersonInput*N;
                if(bedsInput >= N && currPrice <= B){
                    lowestPrice = min(lowestPrice, currPrice);
                }
            }
            
        }
        if(lowestPrice == B+1) {
            cout << "stay home" << endl;
        }
        else {
            cout << lowestPrice << endl;
        }
        
        
    }
    

}
