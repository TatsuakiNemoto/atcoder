#include"bits/stdc++.h"
using namespace std;


int main(){
	vector<int> vec;
	int check;
	for(int i = 0; i < 5; i++){
		int a;
		cin >> a;
		vec.push_back(a);
	}
	cin >> check;
	if((vec[4] - vec[0]) <= check){
		cout << "Yay!" << endl;
	}else{
		cout << ":(" << endl;
	}
	return 0;
}
