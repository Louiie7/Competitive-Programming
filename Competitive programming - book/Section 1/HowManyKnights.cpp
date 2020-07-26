#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int M;
    while(cin >> N && N != 0) {
        cin >> M;
        int answer;
        if(N == 1 || M == 1) {
            answer = max(N, M);
        }
        else if(N == 2 || M == 2) {
            answer = ((max(N, M)/4)*4);
            if(max(N, M) % 4 == 1) {
                answer += 2;
            }
            else if(max(N, M) % 4 > 1) {
                answer += 4;
            } 
        }
        else {
            answer = (N*M+1)/2;
        }        
        cout << answer << " knights may be placed on a " << N << " row " << M << " column board." << endl;
        
    }




}
