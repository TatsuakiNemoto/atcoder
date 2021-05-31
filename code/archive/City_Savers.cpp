#include"bits/stdc++.h"
using namespace std;

int main(){
    //int sa = 0; 
    long int bsb = 0;//before sum 
    long int asb = 0;//after sum
    int n; cin >> n;
    long int a[n+1];
    for(int i=0; i<n+1; i++){
        cin >> a[i];
        //sa += a[i];
    }
    long int b[n];
    for(int i=0; i<n; i++){
        cin >> b[i];
        bsb += b[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] + a[i+1] <= b[i]){
            b[i] = b[i] - a[i] - a[i+1];
            a[i] = 0;
            a[i+1] = 0;
        }else{
            a[i] = a[i] - b[i];
            b[i] = 0;
        }
    }
    for(int i=0; i<n; i++){
        asb += b[i];
    }
/*
    for(int i=0; i<n+1; i++){
        printf("%d ", a[i]);
    }
    putchar('\n');
    for(int i=0; i<n; i++){
        printf("%d ", b[i]);
    }
    putchar('\n');
*/
    cout << bsb - asb << endl;
    return 0;
}