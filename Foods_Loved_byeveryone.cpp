#include"bits/stdc++.h"
using namespace std;

int main(){
	int N, M, k, a;
	int count = 0;
	int data[30] = {};
	cin >> N >> M;
	for(int i = 0; i < N; i++){
		cin >> k;
		for(int j = 0; j < k; j++){
			cin >> a;
			data[a-1]++;
		}
	}
	for(int i = 0; i < M; i++){
		if(data[i] == N){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
