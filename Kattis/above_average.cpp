#include <bits/stdc++.h>
using namespace std;

int main(){
    int C;
    cin >> C;
    double n;
    double grade;
    double gradesum;
    double gradeavg;
    double aboveavg;
    vector<double> grades;
    for(int i = 0; i < C; i++){
        cin >> n;
        aboveavg = 0;
        gradesum = 0;
        for(int j = 0; j < n; j++) {
            cin >> grade;
            gradesum += grade;
            grades.push_back(grade);
        }
        gradeavg = gradesum/n;
        for(int k = 0; k < n; k++) {
            if(grades[k] > gradeavg) {
                aboveavg++;
            }
        }
        cout << fixed << setprecision(3) << ((double)aboveavg)/n * 100 << "%" << endl;
        grades.clear(); 
    }

}
