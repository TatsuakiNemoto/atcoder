#include"bits/stdc++.h"
using namespace std;

int main(){
    int n; cin >> n;
    int l; cin >> l;
    int v[n];
    int aji = 0;
    int min = 100;
    int check;
    for(int i=0; i<n; i++){
        v[i] = l + i;
        if(abs(v[i]) < min){
            min = abs(v[i]);
            check = i;
        }
    }
    v[check] = 0;
    for(int i=0; i<n; i++) aji += v[i];
    cout << aji << endl;
    return 0;
}