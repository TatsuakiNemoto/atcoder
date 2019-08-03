#include"bits/stdc++.h"
using namespace std;

int main(){
	string S;
	cin >> S;
	if(S[0] < '2'){
		cout << "Heisei" << endl;
	}else if(S[0] > '2'){
		cout << "TBD" << endl;
	}else if(S[0] == '2'){
		if(S[1] > '0'){
			cout << "TBD" << endl;
		}else if(S[1] == '0'){
			if(S[2] < '1'){
				cout << "Heisei" << endl;
			}else if(S[2] > '1'){
				cout << "TBD" <<endl;
			}else if(S[2] == '1'){
				if(S[3] < '9'){
					cout << "Heisei" << endl;
				}else if(S[3] == '9'){
					if(S[5] > '0'){
						cout << "TBD" << endl;
					}else if(S[5] == '0'){
						if(S[6] <= '4'){
							cout << "Heisei" << endl;
						}else if(S[6] > '4'){
							cout << "TBD" <<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}
