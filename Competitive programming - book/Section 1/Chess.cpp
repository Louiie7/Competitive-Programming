#include <bits/stdc++.h>
using namespace std;

int main() {
    int C;
    char P;
    int N;
    int M;
    cin >> C;
    for(int i = 0; i < C; i++) {
        cin >> P;
        cin >> N;
        cin >> M;
        if(P == 'Q' || P == 'r') {
            cout << min(N, M) << endl;
        }
        else if(P == 'k') {
            cout << (N*M+1)/2 << endl;
        }
        else {
            cout << ((N+1)/2) * ((M+1)/2) << endl;
        }
    }

}
