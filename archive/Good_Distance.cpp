#include"bits/stdc++.h"
using namespace std;

int main(){
    int N, D;
    cin >> N >> D;
    int x[N][D];
    for(int i=0; i<N; i++){
        for(int j=0; j<D; j++){
            cin >> x[i][j];
        }
    }
    int count = 0;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            int norm = 0;
            for(int k=0; k<D; k++){
                int dif = 0;
                dif = abs(x[i][k] - x[j][k]);
                norm += dif*dif;
            }
            for(int k=0; k<=norm; k++){
                if(k*k == norm) count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}