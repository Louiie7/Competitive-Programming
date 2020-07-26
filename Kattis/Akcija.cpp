using namespace std;
#include <bits/stdc++.h>
int main(){
    int N;
    cin >> N;
    vector<int> bookprices;
    int bookprice;
    for(int i = 0; i < N; i++) {
        cin >> bookprice;
        bookprices.push_back(bookprice);
    }
    sort(bookprices.begin(), bookprices.end(), greater <int>());
    int totalSum = 0;
    for(double j = 0; j < N/3.0; j++) {
        for(int k = 0; k < 3; k++) {
            if(k != 2) { 
                totalSum += bookprices[j*3+k];
            }
            if(j*3+k == N) {
                j = N;
                break;
            }
        }
    }
    cout << totalSum << endl;

}
