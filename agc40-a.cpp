#include"bits/stdc++.h"
using namespace std;

int get_min(int a[], int N){
    int min = 5e5;
    for(int i=0; i<N; i++){
        if(a[i] < min) min = a[i];
    }
    return min;
}

int main(){
    string S;
    cin >> S;
    int N = S.length();
    int a[N]; a[0] = 0;
    for(int i=1; i<N; i++){
        if(S[i] == '<'){
            a[i] = a[i-1] + 1;
        }else if(S[i] == '>'){
            a[i] = a[i-1] - 1;
        }
    }
    for(int i=0; i<N; i++){
        cout << a[i] << " ";
    }
    printf("\n");
    cout << get_min(a, N) << endl;
    int min = get_min(a, N);
    for(int i=0; i<N; i++){
        a[i] = a[i] - min;
    }
    for(int i=0; i<N; i++){
        cout << a[i] << " ";
    }
    printf("\n");
    int sum = 0;
    for(int i=0; i<N; i++) sum += a[i];
    cout << sum << endl;
    return 0;
}