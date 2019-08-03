#include"bits/stdc++.h"
#define K 1000000000
using namespace std;

int main(){
	int N = 0;
	cin >> N;
	int a[N];
	for(int i = 0; i < N; i++){
		cin >> a[i];
	}
	int hist[K];
	for(int i = 0; i < K; i++){
		hist[i] = 0;
	}
	for(int i = 0; i < N; i++){
		for(int j = 1; j <= a[i]; j++){
			if(a[i] % j == 0){
				hist[a[i] / j]++;
			}
		}
	}
	int temp = 0;
	int ans = 0;
	for(int i = 0; i < K; i++){
		if(hist[i] == N - 1){
			temp = hist[i];
			if(ans < temp){
				ans = temp;
			}
		}else if(hist[i] == N){
			ans = i;
		}
	}
	cout << ans << endl;
	return 0;
}
