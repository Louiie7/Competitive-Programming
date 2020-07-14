#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double H, U, D, F;
    while(true) {
        cin >> H >> U >> D >> F;
        if(H == 0) {
            return false;
        }
        double currentU = U;
        bool success = false;
        bool failure = false;
        int day = 2;
        double fatigue = U*F/100;
        if(U > H) {
            cout << "success on day " << 1 << endl;
        }
        else if(U-D < 0) {
            cout << "failure on day " << 1 << endl;
        }
        else {
            double height = U-D;
            while(true) {
                currentU -= fatigue;
                if(currentU > 0) {
                    height += currentU;
                }
                if(height > H) {
                    success = true;
                    break;
                }
                height = height-D;
                if(height < 0) {
                    failure = true;
                    break;
                }
                day++;
            }
            if(failure == true) {
                cout << "failure on day " << day << endl;
            }
            else if(success == true) {
                cout << "success on day " << day << endl;
            }
        }
    }
}