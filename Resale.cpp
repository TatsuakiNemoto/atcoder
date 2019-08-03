#include"bits/stdc++.h"
using namespace std;

int main(){
	int N, ans = 0, temp = 0;
	cin >> N;
	int V[N], C[N], dis[N];
	for(int i = 0; i < N; i++){
		cin >> V[i];
	}
	for(int i = 0; i < N; i++){
		cin >> C[i];
	}
	for(int i = 0; i < N; i++){
		dis[i] = V[i] - C[i];
	}
	for(int i = 0; i < N; i++){
		if(dis[i] >= 0){
			ans += dis[i];
		}
	}
	if(ans >= 0){
		cout << ans << endl;
	}else{
		cout << 0 << endl;
	}
	return 0;
}
