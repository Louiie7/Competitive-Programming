#include <bits/stdc++.h>
using namespace std;
int main() {
	int cardVal;
	while(scanf("%d", &cardVal) && cardVal != 0) {
		vector<int> prince;
		vector<int> princess;
		princess.push_back(cardVal);
		for(int i = 0; i < 2; i++) {
			scanf("%d", &cardVal);
			princess.push_back(cardVal);
		}
		for(int j = 0; j < 2; j++) {
			scanf("%d", &cardVal);
			prince.push_back(cardVal);
		}
		sort(prince.begin(), prince.end());
		sort(princess.begin(), princess.end());
		reverse(prince.begin(), prince.end());
		reverse(princess.begin(), princess.end());
		if(prince[0] > princess[0]) {
			if(prince[1] > princess[0]) {
				int i = 0;
				bool found = false;
				while(i < 52) {
					i++;
					bool chosenVal = true;
					for(int j = 0; j < 3; j++) {
						if(princess[j] == i) {
							chosenVal = false;
						}
					}
					for(int k = 0; k < 2; k++) {
						if(prince[k] == i) {
							chosenVal = false;
						}
					}
					if(chosenVal) {
						cout << i << endl;
						found = true;
						break;
					}
				}
				if(found == false) {
					cout << -1 << endl;
				}
			}
			else if(prince[1] > princess[1]) {
				int i = princess[1];
                bool found = false;
                while(i < 52) {
                    i++;
                    bool chosenVal = true;
                    for(int j = 0; j < 3; j++) {
                        if(princess[j] == i) {
                            chosenVal = false;
                        }
                    }
                    for(int k = 0; k < 2; k++) {
                        if(prince[k] == i) {
					        chosenVal = false;
                        }
                    }
                    if(chosenVal) {
						cout << i << endl;
						found = true;
						break;
                    }
				}
				if(found == false) {
					cout << -1 << endl;
				}
			}
			else if(prince[1] > princess[2]) {
				int i = princess[0];
                bool found = false;
                while(i < 52) {
                    i++;
                    bool chosenVal = true;
                    for(int j = 0; j < 3; j++) {
                        if(princess[j] == i) {
                            chosenVal = false;
                            break;
                        }
                    }
                    for(int k = 0; k < 2; k++) {
                        if(prince[k] == i) {
                            chosenVal = false;
                        }
                    }
                    if(chosenVal) {
                        cout << i << endl;
						found = true;
						break;
                    }
					
				}
				if(found == false) {
                    cout << -1 << endl;
                }
			}
			else {
				int i = princess[0];
                bool found = false;
                while(i < 52) {
                    i++;
					bool chosenVal = true;
                    for(int j = 0; j < 3; j++) {
                        if(princess[j] == i) {
                            chosenVal = false;
                            break;
                        }
                    }
                    for(int k = 0; k < 2; k++) {
                        if(prince[k] == i) {
                            chosenVal = false;
                        }
                    }
                    if(chosenVal) {
                        cout << i << endl;
                        found = true;
						break;
                    }

                }
                if(found == false) {
                    cout << -1 << endl;
                }

			}
		}
		else if(prince[0] > princess[1]) {
			if(prince[1] > princess[1]) {
				int i = princess[1];
                bool found = false;
                while(i < 52) {
                    i++;
                    bool chosenVal = true;
                    for(int j = 0; j < 3; j++) {
                        if(princess[j] == i) {
                            chosenVal = false;
                            break;
                        }
                    }
                    for(int k = 0; k < 2; k++) {
                        if(prince[k] == i) {
                            chosenVal = false;
                        }
                    }
                    if(chosenVal) {
                        cout << i << endl;
                        found = true;
						break;
                    }

                }
                if(found == false) {
                    cout << -1 << endl;
                }

			}
			else {
				cout << -1 << endl;
			}
		}
		else {
			cout << -1 << endl;
		}
	}

}
