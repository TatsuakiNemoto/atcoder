#include"bits/stdc++.h"
using namespace std;

int main(){
	//input
	int N;
	cin >> N;
	float money[N];
	char m_type[N][3];
	for(int i = 0; i < N; i++){
		cin >> money[i];
		for(int j = 0; j < 3; j++){
			cin >> m_type[i][j];
		}
	}
	//check
	float T_money = 0.0; //Otoshidama of Takahashi
	for(int i = 0; i < N; i++){
		if(m_type[i][0] == 'J'){
			T_money += money[i];
		}else if(m_type[i][0] == 'B'){
			T_money += 380000 * money[i];
		}
	}	
	cout << T_money << endl;
	return 0;
}
