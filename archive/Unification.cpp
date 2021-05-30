#include"bits/stdc++.h"
using namespace std;

int main(){
	string S;
	cin >> S;
	int zcount = 0;
	int ocount = 0;
	for(int i = 0; i < S.length(); i++){
		if(S[i] == '0'){
			zcount++;
		}else if(S[i] == '1'){
			ocount++;
		}
	}
	cout << 2*min(zcount, ocount) << endl;
	return 0;
}
