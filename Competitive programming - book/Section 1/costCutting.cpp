#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int c1, c2, c3;
    cin >> n; 
    for(int i = 1; i <= n; i++) {
        cin >> c1 >> c2 >> c3;
        if(c1 < c2 && c3 > c2 || c1 > c2 && c3 < c2) {
            cout << "Case " << i << ": " << c2 << endl;
        }
        else if(c1 > c2 && c3 > c1 || c1 < c2 && c3 < c1) {
            cout << "Case " << i << ": " << c1 << endl;
        }
        else {
            cout << "Case " << i << ": " << c3 << endl;
        }

    }
}
