#include"bits/stdc++.h"
using namespace std;

int main(){
	float T;
	int A, B, ans = 0;
	int k = 1;
	cin >> A >> B >> T;
	if(A <= (T+0.5)){
		for(int i = 1; i <= (T + 0.5); i = A * k){
			ans += B;
			k++;
		}
		cout << ans << endl;
	}else{
		cout << 0 << endl;
	}
        return 0;
}
