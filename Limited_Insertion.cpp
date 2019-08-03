#include"bits/stdc++.h"
using namespace std;

int main(){
  vector<int> ans,b;
  int n,s;
  bool check;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> s;
    b.push_back(s);
  }
  while(true){
    check = false;
    for(int i = b.size()-1; i >= 0; i--){
      if(i+1 == b[i]){
        check = true;
        ans.push_back(i+1);
        b.erase(b.begin() + i);
        break;
      }
    }
    if(check == false){
      cout << -1 << endl;
      break;
    }
    if(b.size() == 0){
      for(int i = ans.size()-1; i >= 0; i--){
        cout << ans[i] << endl;
      }
      break;
    }
  }
}
