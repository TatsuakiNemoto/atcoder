#include"bits/stdc++.h"
using namespace std;

#define MAX 10^100

int main(){
    long long int N, K;
    cin >> N >> K;
    vector<long long int> A, B;
    long long int temp_a, temp_b;
    for(int i = 0; i < N; i++){
        cin >> temp_a >> temp_b ;
        A.push_back(temp_a);
        B.push_back(temp_b);
    }
    long long int money = K;
    long long int all_money = K;
    for(long long int i = 0; money != 0; i++){
        //cout << "in" << endl;
        money = money - 1;
        for(long long int j = 0; j < N; j++){
            //cout << "in_j" << endl;
            if(A[j] == i + 1){
                money += B[j];
                all_money += B[j];
                //cout << "get" << endl;
            }
        }
        if(i > N) break;
    }
    cout << all_money << endl;
    return 0;
}