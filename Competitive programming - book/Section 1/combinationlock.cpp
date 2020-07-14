#include <bits/stdc++.h>
using namespace std;
int main(){
    int spos, fpos, sepos, tpos;
    while(scanf("%d %d %d %d", &spos, &fpos, &sepos, &tpos) != EOF) {
        int degrees = 1080; 
        if(spos == 0 && fpos == 0) {
            break;
        }
        if(spos < fpos) {
            degrees += (40-fpos+spos)*9;
        }
        else {
            degrees += (spos-fpos)*9;
        }

        if(sepos < fpos) {
            degrees += (40+sepos-fpos)*9;
        }
        else {
            degrees += (sepos-fpos)*9;
        }

        if(tpos < sepos) {
            degrees += (sepos-tpos)*9;
        }
        else {
            degrees += (40+sepos-tpos)*9;
        }
        printf("%d\n", degrees);
    }
}