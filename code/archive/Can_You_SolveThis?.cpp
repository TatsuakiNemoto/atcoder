#include"bits/stdc++.h"
using namespace std;

int main(){
	int N, M, C, check;
	int count = 0;
	cin >> N >> M >> C;
	int B[M], A[N][M];
	for(int i = 0; i < M; i++){
		cin >> B[i];
	}
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cin >> A[i][j];
		}
	}
	for(int i = 0; i < N; i++){
		check = 0;
		for(int j = 0; j < M; j++){
			check += B[j]*A[i][j];
		}
		if(check + C > 0){
			count++;
		}
	}	
	cout << count << endl;
	return 0;
}
