#include"bits/stdc++.h"
using namespace std;



int main(){
    int n; cin >> n;
    float v[n]; for(int i=0; i<n; i++) cin >> v[i];
    sort(v, v+n);

/*
    for(int i=0; i<n; i++) printf("%d ", v[i]);
    putchar('\n');
*/
    float ans = v[0];
    for(int i=1; i<n; i++){
        ans = (ans + v[i])/2;
    }
    cout << ans << endl;
    return 0;
}