#include"bits/stdc++.h"
using namespace std;

char in[120];
pair<pair<string,int>,int> p[110];
int main(){
     int N;
     cin >> N;
     for(int i=0;i<N;i++){
        int t;
        scanf("%s%d",in,&t);
        string tmp=in;
        p[i]=make_pair(make_pair(in,-t),i);
    }
    sort(p,p+N);
    for(int i=0;i<N;i++)printf("%d\n",p[i].second+1);
 }