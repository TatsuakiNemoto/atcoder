#include"bits/stdc++.h"
using namespace std;

int main(){
	int N, Q, count;
	string S, l, r, NS;
	cin >> N >> Q;
	cin >> S;
	for(int i = 0; i < Q; i++){
		cin >> l[i] >> r[i];
		for(int k = 0; k < r[i] - l[i] + 2; k++){
			NS[k] = S[l[i] + 1 + k];
		}
		for(int j = 0; j < N; j++){
			if(NS[j] == 'A'){
				if(NS[j+1] == 'C'){
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}

