#include "bits/stdc++.h"
using namespace std;

#define L 3000
int c = 0;

void check1(int a, int n){
    for (size_t i = 1; i < L; i++) {
        if(i * a == n) c++;
    }
}

void check2(int a, int b, int n){
    n = n - (a + b);
    check1(a, n);
    check1(b, n);
    if(n - (a + b) > 0){
        check2(a, b, n);
    }else if(n - (a + b) == 0) c++;
}

void check3(int a, int b, int c, int n){
    n = n - (a + b + c);
    check1(a, n);
    check1(b, n);
    check1(c, n);
    check2(a, b, n);
    check2(b, c, n);
    check2(c, a, n);
    if(n - (a + b + c) > 0){
        check3(a, b, c, n);
    }else if(n - (a + b + c) == 0) c++;
}

 int main(){
     int rgb[3], N;
     int i = 0, j = 0, k = 0;
     cin >> rgb[0] >> rgb[1] >> rgb[2] >> N;
     check1(rgb[0], N);
     check1(rgb[1], N);
     check1(rgb[2], N);
     check2(rgb[0], rgb[1], N);
     check2(rgb[1], rgb[2], N);
     check2(rgb[2], rgb[0], N);
     check3(rgb[0], rgb[1], rgb[2], N);
     cout << c+1 << endl;
     return 0;
 }
