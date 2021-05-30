#include"bits/stdc++.h"
using namespace std;

int main(){
	int A, B, n;
	n = 0;
	cin >> A >> B;
	for(int i=0; i < 2; i++){
		if(A <= B){
			n = n + B;
			B--;
		}else{
			n = n + A;
			A--;
		}
	}
	cout << n << endl;

	return 0;

}
