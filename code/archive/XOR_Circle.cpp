#include"bits/stdc++.h"
using namespace std;

int XOR(int a, int b){
    int bina_a[10], bina_b[10], XOR[10];
    int ans = 0;
    for(int i=0; i<10; i++){
        bina_a[i] = 0;
        bina_b[i] = 0;
    }
    for(int i=0; i<10; i++){
        bina_a[i] = a%2;
        bina_b[i] = b%2;
        a = a/2;
        b = b/2;
    }
    for(int i=0; i<10; i++){
        if(bina_a[i] == bina_b[i]){
            XOR[i] = 0;
        }else{
            XOR[i] = 1;
        }
    }
    /*
    for(int i=0; i<10; i++){
        cout << XOR[i];
    }
    printf("\n");
    for(int i=0; i<10; i++){
        cout << bina_a[i];
    }
    printf("\n");for(int i=0; i<10; i++){
        cout << bina_b[i];
    }
    printf("\n");
    */
    for(int i=0; i<10; i++){
        ans += XOR[i]*pow(2, i);
    }
    return ans;
}

int main(){
    int flag = 0; 
    int check;
    int N;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++) cin >> a[i];
    /*int a, b;
    cin >> a >> b;
    cout << XOR(a,b) << endl;*/
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                check = XOR(a[i], a[j]);
                if(k!=i && k!=j && a[k]==check){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) break;
        }
        if(flag == 1) break;
    }
    if(flag ==1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}