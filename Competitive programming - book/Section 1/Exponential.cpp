#include <bits/stdc++.h>
using namespace std;
int main(){
    int X;
    cin >> X;
    double largestPower = 1;
    int i = 0;
    double perfectpower;
    for(double i = 2; i < sqrt(X); i++) {
        for(double j = 2; j < sqrt(X); j++) {
            perfectpower = pow(i, j);
            if(perfectpower <= X) {
                largestPower = max(perfectpower, largestPower);
            }
        }
    }
    cout << largestPower << endl;
}