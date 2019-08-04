#include"bits/stdc++.h"
using namespace std;

int main(){
    int n; cin >> n;
    int h[n]; for(int i=0; i<n; i++) cin >> h[i];
    int flag = 0;
    for(int i=n-1; i>0; i--){
        if(h[i]-h[i-1] == -1){
            h[i-1] = h[i-1]-1;
        }else if(h[i]-h[i-1] < -1){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}