#include"bits/stdc++.h"
typedef long long ll;

using namespace std;

int main(){
    string s; cin >> s;
    int flag = 0; int count = 0;
    int a[s.length()]; for(int i=0; i<s.length(); i++)a[i] = 1;
    int ans[s.length()]; for(int i=0; i<s.length(); i++)ans[i] = 0;
    for(int r=0; r<1000; r++){
        count = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'R'){
                ans[i+1] += a[i];
            }else if(s[i] == 'L'){
                ans[i-1] += a[i];
            }
        }
        for(int i=0; i<s.length(); i++){
            if(a[i] != ans[i]){
                a[i] = ans[i];
                count++;
            }
            if(count == 0){
                flag = 1;
            }
        }
        if(flag == 1)break;
    }
    for(int i=0; i<s.length(); i++) printf("%d ", ans[i]);
    printf("\n");
    //printf("%lu\n", s.length());
    return 0;
}