#include"bits/stdc++.h"
using namespace std;

int sum(int i){
    if(i != 0){
        return i + sum(i - 1);
    }
    return 0;
}

int main(){
    int N, K, sum_n, sum_k;
    cin >> N >> K;
    sum_n = sum(N) * K;
    //cout << sum_n << endl;
    sum_k = sum(K) * N;
    //cout << sum_k << endl;
    cout << sum_n * 100 + sum_k << endl;
    return 0;
}