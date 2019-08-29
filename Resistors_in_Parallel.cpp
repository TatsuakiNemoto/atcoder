#include"bits/stdc++.h"
using namespace std;

int main(){
    int n; cin >> n;
    float a[n]; for(int i=0; i<n; i++) cin >> a[i];
    float s = 0;
    for(int i=0; i<n; i++){
        s += 1.0/a[i];
    }
    printf("%5f", 1/s);
}