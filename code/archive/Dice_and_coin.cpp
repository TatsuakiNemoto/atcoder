#include"bits/stdc++.h"
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int point;
    float sum = 0.0;
    for(int i = 1; i <= N; i++){
        float rate = 1.0;
        point = i;
        for(int j = 0; point < K; j++){
            point = 2*point;
            rate = rate/2;
        }
        sum = sum + rate;
    }
    printf("%.10f\n", sum/N);
    return 0;
}