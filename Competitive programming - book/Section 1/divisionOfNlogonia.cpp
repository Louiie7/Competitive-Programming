#include <bits/stdc++.h>
using namespace std;
int main(){
    int queries, divX, divY, coordX, coordY;
    while(scanf("%d", &queries) == 1) {
        if(queries == 0) {
            break;
        }
        scanf("%d %d", &divX, &divY);
        for(int i = 0; i < queries; i++) {
            scanf("%d %d", &coordX, &coordY);
            if(coordX == divX || divY == coordY) {
                printf("%s\n", "divisa");
            }
            else if(coordX > divX && coordY > divY) {
                printf("%s\n", "NE");
            }
            else if(coordX > divX && coordY < divY) {
                printf("%s\n", "SE");
            }
            else if(coordX < divX && coordY > divY) {
                printf("%s\n", "NO");
            }
            else {
                printf("%s\n", "SO");
            }
        }
    }
    
}