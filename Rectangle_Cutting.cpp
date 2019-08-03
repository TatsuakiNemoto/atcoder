#include"bits/stdc++.h"
using namespace std;

int main(){
    int w, h, x, y;
    cin >> w >> h >> x >> y;
    printf("%lf %d\n", double(w)*double(h)/2, x+x==w && y+y==h);
    return 0;
}