#include"bits/stdc++.h"
using namespace std;

int main(){
	string s;
	cin >> s;
	int ans = 999;
	for(int i = 0; i <= s.size() - 3; i++){
		int temp = (s[i] - '0') * 100 + (s[i+1] - '0') * 10 + s[i+2] - '0';
		if(ans > abs(temp - 753)) ans = abs(temp - 753);
	}
	cout << ans << endl;
	return 0;
}
