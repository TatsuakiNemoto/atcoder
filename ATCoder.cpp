#include"bits/stdc++.h"
using namespace std;


int main(){
	string S;
	cin >> S;
	int count = 0;
	int subc = 0;
	for(int i = 0; i < S.length(); i++){
		if(S[i]=='A' || S[i]=='T' || S[i]=='C' || S[i]=='G'){
			if(subc > 0){
				subc++;
				if(subc > count){
					count = subc;//recode
				}
			}else{
				subc++;
				if(subc > count){
					count = subc;//recode
				}
			}
		}else{
			subc = 0;//reset
		}
	}
	cout << count << endl;
	return 0;
}
