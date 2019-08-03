#include"bits/stdc++.h"
using namespace std;

int main(){
	int s[300];
	for(int i = 0; i < 300; i++) s[i] = 0;
	cin >> s[0];
	for(int i = 1; ; i++){
		s[i] = (s[i-1]%2 == 0) ? s[i-1]/2 : s[i-1]*3+1;
		for(int j = 0; j < i; j++){
			if(s[i] == s[j]){
				cout << i + 1 << endl;
				return 0;
			}
		}
	}
}
