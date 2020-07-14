#include <bits/stdc++.h>
using namespace std;
int main(){
    int L;
    typedef map<string, map<string, string> > theMap;
    theMap directionMap;
    directionMap["+x"]["+x"] = "+x";
    directionMap["+x"]["No"] = "+x";
    directionMap["-x"]["No"] = "-x";
    directionMap["+y"]["No"] = "+y";
    directionMap["-y"]["No"] = "-y";
    directionMap["+z"]["No"] = "+z";
    directionMap["-z"]["No"] = "-z";
    directionMap["+x"]["+y"] = "+y";
    directionMap["+y"]["-y"] = "+x";
    directionMap["+x"]["-z"] = "-z";
    directionMap["+x"]["+z"] = "+z";
    directionMap["-y"]["+y"] = "+x";
    directionMap["+z"]["+z"] = "-x";
    directionMap["-z"]["-z"] = "-x";
    directionMap["+z"]["-z"] = "+x";
    directionMap["-z"]["+z"] = "+x";
    directionMap["-x"]["+y"] = "-y";
    directionMap["-x"]["-y"] = "+y";
    directionMap["-x"]["-z"] = "+z";
    directionMap["-x"]["+z"] = "-z";

    while(cin >> L && L > 0) {
        string direction = "+x";
        string newdirection;
        for(int i = L; i > 1; i--) {
            cin >> newdirection;
            direction = directionMap[direction][newdirection];
        }
        cout << direction << endl;

    }
}