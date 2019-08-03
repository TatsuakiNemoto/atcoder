#include"bits/stdc++.h"
using namespace std;

int main(){
	int N;
	cin >> N;
	int p[N];
	for(int i = 0; i < N; i++) cin >> p[i];
	sort(p, p+N, greater<int>());
	int sum = 0;
	sum = p[0]/2;
	for(int i = 1; i < N; i++) sum += p[i];
	cout << sum << endl;
	return 0;
}
