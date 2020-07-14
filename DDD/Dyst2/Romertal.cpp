#include <bits/stdc++.h>
using namespace std;
bool doublerule(string before, string after) {
	if((before == "V" && after == "V") || (before == "L" && after == "L") || (before == "D" && after == "D")) {
		return true;
	}
	return false;
}
bool rules(string before, string after) {
	if((before == "V" && after == "V") || (before == "L" && after == "L") || (before == "D" && after == "D")) {
        return false;
    }
	if(before == "I") {
		if(after == "L" || after == "D" || after == "M" || after == "C") {
			return false;
		}
	}
	if(before == "X") {
		if(after == "M" || after == "D") {
			return false;
		}
	}
	if(before == "V") {
		if(after == "X" || after == "L" || after == "C" || after == "D" || after == "M") {
			return false;
		}
	}
	if(before == "L") {
		if(after == "C" || after == "D" || after == "M") {
			return false;
		}
	}
	return true;
}
int main() {
	int N;
	cin >> N;
	vector<string> num;
	num.push_back("I");
	num.push_back("V");
	num.push_back("X");
	num.push_back("L");
	num.push_back("C");
	num.push_back("D");
	num.push_back("M");
	map<string, int> romemap;
	romemap.insert(pair<string, int>("I", 1));
	romemap.insert(pair<string, int>("V", 5));
	romemap.insert(pair<string, int>("X", 10));
	romemap.insert(pair<string, int>("L", 50));
	romemap.insert(pair<string, int>("C", 100));
	romemap.insert(pair<string, int>("D", 500));
	romemap.insert(pair<string, int>("M", 1000));
	int curr = N;
	int len = num.size();
	int currIndex = -1;
	int val;
	int times = 1;
	string currNum;
	string Romenum;
	bool removal;
	string lastRoman = "";
	while(N != 0) {
		for(int i = len-1; i >= 0; i--) {
			currNum = num[i];
			val = romemap[currNum];
			if(curr-val >= 0) {
				break;
			}
			if(curr <= 0 && N != 0) {
				if(N-val >= 0) {
					break;
				}
			}
		}
		if(N-val >= 0) {
			lastRoman = string(1, Romenum[currIndex]);
			cout << "Idx: " << currIndex << endl;
			cout << "N is: " << N << endl;
			cout << "The last letter was: " << lastRoman << endl;
			cout << "The current letter is: " << currNum << endl;
			cout << "The number of times is: " << times << endl;
			cout << "The curr is: " << curr << endl;
			cout << " " << endl;
			if(lastRoman == currNum && times == 3) {
				N += 3*val;
				curr += 4*val;
				cout << curr << endl;
				Romenum = Romenum.substr(0, Romenum.length()-3);
				currIndex -= 4;
				times = 0;
				removal = true;
			}
			else if(doublerule(lastRoman, currNum)) {
				cout << "Hi" << endl;
				N += val;
				curr += val;
				Romenum = Romenum.substr(0, Romenum.length()-2);
				currIndex -= 2;
				times = 1;
				removal = true;
			}
			else if(rules(lastRoman, currNum)) {
				Romenum += currNum;
				N -= val;
				curr -= val;
			}
			else {
				currIndex -= 1;
			}

		}
		else if(N-val < 0 && curr-val > 0) {
            lastRoman = string(1, Romenum[currIndex]);
            cout << "Idx: " << currIndex << endl;
            cout << "N is: " << N << endl;
            cout << "The last letter was: " << lastRoman << endl;
            cout << "The current letter is: " << currNum << endl;
            cout << "The number of times is: " << times << endl;
            cout << "The curr is: " << curr << endl;
            cout << " " << endl;
            if(doublerule(lastRoman, currNum)) {
                N += val;
                curr += val;
                Romenum = Romenum.substr(0, Romenum.length()-1);
                currIndex -= 2;
                times = 1;
            }
            else if(rules(currNum, lastRoman)) {
                if(currIndex < 0) {
                    currIndex += 1;
                }
                Romenum.insert(currIndex, currNum);
                N += val;
                curr -= val;
            }
            else {
                curr += val;
				currIndex -= 1;
            }

        }
		else if(N+val <= 0) {
			lastRoman = string(1, Romenum[currIndex]);
			cout << "Idx: " << currIndex << endl;
            cout << "N is: " << N << endl;
            cout << "The last letter was: " << lastRoman << endl;
            cout << "The current letter is: " << currNum << endl;
            cout << "The number of times is: " << times << endl;
			cout << "The curr is: " << curr << endl;
			cout << " " << endl;
			if(doublerule(lastRoman, currNum)) {
				N += val;
                curr += val;
                Romenum = Romenum.substr(0, Romenum.length()-1);
				currIndex -= 2;
				times = 1;
			}
			else if(rules(currNum, lastRoman)) {
				if(currIndex == -1) {
					currIndex += 1;
				}
                Romenum.insert(currIndex, currNum);
                N += val;
                curr += val;
				currIndex = currIndex-1;
            }
			else {
				currIndex -= 1;
			}

		}
		cout << curr << endl;
		currIndex += 1;
		if(currIndex != 0) {
			if(lastRoman == currNum) {
				 times += 1;
			}
			else if(lastRoman != currNum) {
				times = 1;
			}

		}
	}
	cout << Romenum << endl;
}
