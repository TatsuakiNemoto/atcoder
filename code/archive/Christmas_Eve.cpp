#include"bits/stdc++.h"
using namespace std;

int main(){
	int N, K, ans = 1000000000;
	cin >> N >> K;
	int h[N];
	for(int i = 0; i < N; i++) cin >> h[i];
	sort(h, h+N, greater<int>());
	for(int i = 0; i <= N - K; i++){
		if(ans > h[i] - h[i+K-1]) ans = h[i] - h[i+K-1];
	}
	cout << ans << endl;
}
