#include"bits/stdc++.h"
using namespace std;

int main(){
	int A, B, K;
	cin >> A >> B >> K;
	int dA[50] = {0};
	int dB[50] = {0};
	int gcd[50] = {0};
	int k = 0;
	int l = 0;
	int m = 0;
	//number store
	for(int i = 1; i <= A; i++){
		if(A%i == 0){
			dA[k] = i;
			k++;
		}
	}
	for(int i = 1; i <= B; i++){
		if(B%i == 0){
			dB[l] = i;
			l++;
		}
	}
	//check
	for(int i = 0; i < k + 1; i++){
		for(int j = 0; j < l + 1; j++){
			if(dA[i] == dB[j]){
				gcd[m] = dA[i];
				m++;
			}
		}
	}
	//sort
	int tmp = 0;
	for (int i = 0; i < 50; ++i) {
		for (int j = i+1; j < 50; ++j) {
			if (gcd[i] < gcd[j]) {
				tmp =  gcd[i];
				gcd[i] = gcd[j];
				gcd[j] = tmp;
			}
		}
	}


	//output
	cout << gcd[K -1] << endl;
	//for(int i = 0; i < 50; i++){
	//	cout << dA[i] << endl;
	//	cout << dB[i] << endl;
	//}
	return 0;
}
