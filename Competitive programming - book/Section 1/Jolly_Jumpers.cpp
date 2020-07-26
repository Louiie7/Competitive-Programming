#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int f;
    int s;
    int diff;
    bool jolly = true;
    bool flag[3050];
    while(scanf("%d", &n) == 1) {
        for(int i = 0; i < n; i++) {
            flag[i] = 0;
        }
        cin >> f;
        for(int i = 0; i < n-1; i++) {
            cin >> s;
            diff = abs(f-s);
            flag[diff] = true;
            f = s;
        }
        for(int j = 1; j < n; j++) {
            if(!flag[j]) {
                jolly = false;
                cout << "Not jolly" << endl;
                break;
            }
        }
        if(jolly) {
            cout << "Jolly" << endl;
        }
        jolly = true;
    }

}
