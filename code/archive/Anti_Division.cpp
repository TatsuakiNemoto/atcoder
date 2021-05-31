#include"bits/stdc++.h"
using namespace std;

int main(){
    long long int a, b, count = 0;
    int c, d;
    cin >> a >> b >> c >> d;
    for(int i=a; i<b-a; i++){
        if(i%c || i%d) count++;
    }
    cout << count << endl;
}