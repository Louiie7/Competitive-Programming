#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    double P, R, F;
    for(int i = 0; i < T; i++) {
        cin >> P;
        cin >> R;
        cin >> F;
        double year = log(F/P)/log(R);
        double pop = P*pow(R, ceil(year));
        if(pop == F) {
            year++;
        }
        if(P <= F) {
            cout << ceil(year) << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
}
