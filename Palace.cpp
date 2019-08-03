#include "bits/stdc++.h"
using namespace std;

int main(){
  int N, T, A, x = 0, flag = 1<<30, ans = 1;
  cin >> N >> T >> A;
  int d[N];
  for (size_t i = 0; i < N; i++) {
    cin >> x;
    d[i] = abs(T * 1000 - x * 6 - A * 1000);
  }
  for (int j = 0; j < N; j++) {
    if(flag > d[j]){
      flag = d[j];
      ans = j + 1;
    }
  }
  cout << ans << endl;
  return 0;
}
