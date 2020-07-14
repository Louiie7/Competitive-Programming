#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int fnum, snum, t;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &fnum, &snum);
        if(fnum > snum) {
            printf("%c\n", '>');
        }
        else if(snum > fnum) {
            printf("%c\n", '<');
        }
        else {
            printf("%c\n", '=');
        }
    }
}   