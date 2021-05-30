#include"bits/stdc++.h"
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(abs(a-b)%2 == 0){
        printf("%d\n", abs(max(a, b) - abs(a-b)/2));
    }else{
        printf("IMPOSSIBLE");
    }
    return 0;
}