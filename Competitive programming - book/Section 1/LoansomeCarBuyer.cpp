#include <bits/stdc++.h>
using namespace std;
int main(){
    double loanLength, downPayment, loanSize, depRates;
    while(true) {
        cin >> loanLength >> downPayment >> loanSize >> depRates;
        if(loanLength < 0) {
            break;
        }
        vector<int> months;
        vector<double> depRate;
        int monthEnd;
        double rate;
        for(int i = 0; i < depRates; i++) {
            cin >> monthEnd;
            cin >> rate;
            months.push_back(monthEnd);
            depRate.push_back(rate);
        }
        months.push_back(loanLength);
        double carValue = (loanSize+downPayment)*(1-depRate.at(0));
        double moneyOwe = loanSize;
        int currMonth = 0;
        int currRate = 0;
        monthEnd = months.at(1);
        while(moneyOwe > carValue) {
            currMonth++;
            if(currMonth == monthEnd) {
                if(currRate == months.size()-2) {
                    monthEnd = months[currRate+1];
                }
                else {
                    currRate++;
                    monthEnd = months[currRate+1];
                }
                
            }
            carValue = carValue*(1-depRate[currRate]);
            moneyOwe -= loanSize/loanLength;
        }
        if(currMonth != 1) {
            cout << currMonth << " months" << endl;
        }
        else {
            cout << currMonth << " month" << endl;
        }  
    }

}
