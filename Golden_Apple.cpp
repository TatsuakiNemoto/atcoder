#include"bits/stdc++.h"
using namespace std;

int main(){
    int N, D;
    int n = 0;
    cin >> N >> D;
    while((2*D*n+n) < N) n++;
    cout << n << endl;
    return 0;
}