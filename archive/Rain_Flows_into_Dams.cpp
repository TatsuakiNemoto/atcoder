#include"bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(){
    int N;
    cin >> N;
    ll a[N];
    for(int i=0; i<N; i++) cin >> a[i];
    ll ans[N];
    ll S = 0;
    for(int i=0; i<N; i++) S += a[i];
    ll sum = 0;
    for(int i=1; 2*i<N; i++) sum += 2*a[2*i-1];
    ans[0] = S - sum;
    for(int i=1; i<N; i++){
        ans[i] = 2*a[i-1] - ans[i-1];
    }
    for(int i=0; i<N; i++) printf("%lld ", ans[i]);
    printf("\n");
    return 0;
}