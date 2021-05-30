#include"bits/stdc++.h"
using namespace std;

int main(){
	int N;
	cin >> N;
	int h[N];
	for(int i = 0; i < N; i++) cin >> h[i];
	sort(h, h + N, greater<int>());
	cout << h[0] << endl;
	return 0;
}
