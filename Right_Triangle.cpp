#include"bits/stdc++.h"
using namespace std;

int main(){
	int edge[3];
	for(int i = 0; i < 3; i++) cin >> edge[i];
	sort(edge, edge+2);
	cout << (edge[0] * edge[1]) / 2 << endl;
}
