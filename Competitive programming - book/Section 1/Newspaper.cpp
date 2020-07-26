#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int K;
    int M;
    char c;
    string l = "";
    double val;
    cin >> N;
    unordered_map<char, double> a;
    unordered_map<char, double>::iterator it;
    while(N--) {
        double pay = 0;
        cin >> K;
        while(K--) {
            cin >> c;
            cin >> val;
            a[c] = val;
        }
        cin >> M;
        cin.ignore();
        while(M--) {
            getline(cin, l);
            for(int i = 0; i < l.length(); i++) {
                it = a.find(l[i]);
                if(it != a.end()) {
                    pay += it->second;
                }
            }           
        }
        cout << fixed << setprecision(2) << pay/100.0 << "$" << endl;
        a.clear();
            
    
    }

}
