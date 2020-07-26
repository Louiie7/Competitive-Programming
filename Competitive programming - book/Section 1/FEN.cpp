#include <bits/stdc++.h>
using namespace std;

int main() {
    string fenNot;
    char fen[75];
    int attacked;
    while(scanf("%s", fen) != EOF) {
        fenNot = fen;
        int 2d[8][8];      
        for(int i = 0; i < fenNot.length(); i++) {
            for(int j = 0; j < 8; j++) {
                char a = fenNot[i];
                if(to_string((int)a) == a) {
                     j += (int)a;      
                }
                else if(a == 'k' || a == 'K') {
                    for(int t = i-1; t < 2+i; t++) {
                        for(int k = j-1; k < 2+j; k++) {
                            if(k > 0 || k < 8) {
                                2d[t][k] = 1;   
                            }
                        } 
                    }
                }
                else if(a == 'n' || a == 'N') {
                    for(int t = i-1; t < 2+i; t++) {
                        for(int k = j-1; k < 2+j; k++) {
                            if(k > 0 || k < 8) {
                                2d[t][k] = 1;
                            }
                        }
                    }
                }

            }
        }
    }



}
