#include"bits/stdc++.h"
using namespace std;

int gcd(int a, int b){
	if(b == 0){
		return a;
	}else{
		return gcd(b, a % b);
	}
}

int main(){
	int N, ans;
	cin >> N;
	int HP[N];
	for(int i = 0; i < N; i++){
		cin >> HP[i];
	}
	ans = gcd(HP[0], HP[1]);
	for(int i = 2; i < N; i++){
		ans = gcd(ans, HP[i]);
	}
	cout << ans << endl;
	return 0;
}
