#include <bits/stdc++.h>
using namespace std;
int main(){
    int RFP, n, p = 0;
    while(cin >> n >> p && n+p != 0) {
        if(RFP != 0) {
            cout << endl;
        }
        RFP++;
        cin.ignore();
        string requirement;
        string name;
        int requirementsmet = -1;
        double price = 10000000000;
        for(int i = 0; i < n; i++) {
            getline(cin, requirement);
        }
        for(int i = 0; i < p; i++) {
            double currentprice;
            int reqMet;
            string currName;
            getline(cin, currName);
            cin >> currentprice;
            cin >> reqMet;
            cin.ignore();
            for(int k = 0; k < reqMet; k++) {
                getline(cin, requirement);
            }
            if(reqMet > requirementsmet || (requirementsmet == reqMet && currentprice < price)) {
                name = currName;
                price = currentprice;
                requirementsmet = reqMet;
            }
        }
        cout << "RFP #" << RFP << endl;
        cout << name << endl;
        
    }
}1