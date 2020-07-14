#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        int N;
        int minSpeed = -1;
        cin >> N;
        for(int j = 0; j < N; j++) {
            int creatureSpeed;
            cin >> creatureSpeed;
            minSpeed = max(minSpeed, creatureSpeed);
        }
        cout << "Case " << i+1 << ": " << minSpeed << endl;
    }
}