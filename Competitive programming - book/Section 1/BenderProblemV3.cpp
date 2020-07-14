#include <bits/stdc++.h>
using namespace std;
int main(){
    int L;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin >> L && L > 0) {
        string direction = "+x";
        string newdirection;
        for(int i = L; i > 1; i--) {
            cin >> newdirection;
            //cout << newdirection << endl;
            if(direction == "+x" && newdirection != "No") {
                direction = newdirection;
            }
            else if(direction == newdirection) {
                direction = "-x";
            }
            else if(direction == "-x") {
                if(newdirection == "+y") {
                    direction = "-y";
                }
                else if(newdirection == "-y") {
                    direction = "+y";
                }
                else if(newdirection == "+z") {
                    direction = "-z";
                }
                else if(newdirection =="-z"){
                    direction = "+z";
                }
            }
            else if((direction == "+y" && newdirection == "-y") || (direction == "-y" && newdirection == "+y")) {
                    direction = "+x";
            }
            else if((direction == "+z" && newdirection == "-z") || (direction == "-z" && newdirection == "+z")) {
                    direction = "+x";
            }
            //cout << "direction after turn " << direction << endl;
        }
        cout << direction << endl;

        

    }
}