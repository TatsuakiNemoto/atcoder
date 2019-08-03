#include"bits/stdc++.h"
using namespace std;

int main(){
	int N, sum = 0, max = 0;
	cin >> N;
	int L[N];
	for(int i = 0; i < N; i++){
		cin >> L[i];
	}
	for(int i = 0; i < N; i++){
		sum += L[i];
		if(max <= L[i]) max = L[i];
	}
	if(max < sum - max){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}
