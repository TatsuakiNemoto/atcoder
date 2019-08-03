#include"bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(){
    ll L, R, sub;
    cin >> L >> R;
    int ans = 2019;
    for(ll i=L; i<R; i++){
        for(ll j=i+1; j<=R; j++){
            sub = (i*j)%2019;
            if(ans > sub) ans=sub;
            if(ans == 0) break;
        }
        if(ans == 0) break;
    }
    cout << ans << endl;
    return 0;
}