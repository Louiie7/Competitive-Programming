#include <bits/stdc++.h>
using namespace std;
int main() {
    string text = "";
    bool curr = false;
    char c;
    while(scanf("%c", &c) != EOF){
        if(c == '"') {
            if(curr == false) {
                printf("%s", "``");
                curr = true;
            }
            else {
                printf("%s", "''");
                curr = false;
            }
            
        }
        else {
            printf("%c", c);
        }

    }

}