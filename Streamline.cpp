#include"bits/stdc++.h"
using namespace std;

int main(){
	int N, M, temp = 0, sum = 0;
	cin >> N >> M;
	int C[M], L[M - 1];//coordinate
	for(int i = 0; i < M; i++){
		cin >> C[i];
	}
	if(N >= M){
		cout << 0 << endl;
	}else{
		sort(C, C + M);
		for(int i = 0; i < M - 1; i++){
			L[i] = C[i + 1] - C[i];
		}
		sort(L, L + (M - 1), greater<int>());
		for(int i = 0; i < N - 1; i++){
			sum += L[i];
		}
		cout << C[M-1] - C[0] - sum << endl;
	}
	return 0;
}
