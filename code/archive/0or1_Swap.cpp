#include"bits/stdc++.h"
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    int p[N], a[N];
    for(int i=0; i<N; i++){
        cin >> p[i]; a[i] = p[i];
    }
    sort(a, a+N);
    int flag = 0;
    for(int i=0; i<N; i++){
        if(p[i] != a[i]) flag++;
    }
    if(flag ==0 || flag == 2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    cout << "add" << endl;
    return 0;
}