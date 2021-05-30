#include "bits/stdc++.h"
using namespace std;

int main(){
    string n;
    cin >> n;
    for (size_t i = 0; i < 3; i++) {
        if(n[i] == '9') n[i] = '1';
        else if(n[i] == '1') n[i] = '9';
    }
    cout << n << endl;
    return 0;
}
