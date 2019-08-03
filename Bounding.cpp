#include"bits/stdc++.h"
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int l[n];
    for(int i=0; i<n; i++) cin >> l[i];
    int d = 0;
    int j = 0;
    for(j=0; d<=x; j++){
        d += l[j];
    }
    cout << j << endl;
    return 0;
}