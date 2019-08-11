#include"bits/stdc++.h"
using namespace std;

int main(){
    string s;
    cin >> s;
    int flag = 0;
    int s1, s2;
    for(int i=0; i<3; i++){
        s1 = s[i] - '0';
        s2 = s[i+1] - '0';
        if(abs(s1-s2) == 0){
            flag = 1;
        }
    }
    if(flag == 1){
        cout << "Bad" << endl;
    }else{
        cout << "Good" << endl;
    }
    return 0;
}