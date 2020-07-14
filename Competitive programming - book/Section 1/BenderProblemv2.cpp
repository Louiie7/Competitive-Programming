#include <bits/stdc++.h>
using namespace std;
int main(){
    int L;
    typedef map<pair<string, string>, string> AMapT;
    AMapT directionMap;
    directionMap[make_pair("+x","+x")] = "+x";
    directionMap[make_pair("+x","+y")] = "+y";
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
        string newdirection = "y";
        for(int i = L; i > 1; i--) {
            cin >> newdirection;
            AMapT::iterator f = directionMap.find(make_pair(direction, newdirection));
            string hel
            
        }

    }
}