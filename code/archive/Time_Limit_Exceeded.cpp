#include "bits/stdc++.h"
using namespace std;

int main(){
  int N, T, count = 0;
  cin >> N >> T;
  int ct[N][2];
  vector<int> cost;
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < 2; j++) {
      cin >> ct[i][j];
    }
    if(ct[i][1] <= T) cost.push_back(ct[i][0]);
    else count++;
  }
  if(count == N) cout << "TLE" << endl;
  else{
    sort(cost.begin(), cost.end());
    cout << cost[0] << endl;
  }
  return 0;
}
