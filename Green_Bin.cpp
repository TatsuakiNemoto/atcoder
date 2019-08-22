#include"bits/stdc++.h"
using namespace std;

int main(){
    int n; cin >> n;
    string s[n];
    int count = 0; int check = 0;
    for(int i=0; i<n; i++) cin >> s[i];
    for(int i=0; i<n; i++){
        sort(s[i].begin(), s[i].end());
    }
    sort(s, s+n);
    for(int i=0; i<n-1; i++){
        if(s[i] == s[i+1]) count++;
    }
    cout << count << endl;
    return 0;
}