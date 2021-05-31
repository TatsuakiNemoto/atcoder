#include"bits/stdc++.h"
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[0] == '0'){
        if(s[1] == '0'){
            if(s[2] == '0'){
                if(s[3] == '0'){
                    cout << "NA" << endl;
                }else{
                    cout << "YYMM" << endl;
                }
            }else if(s[2] == '1'){
                if(s[3] < '3'){
                    cout << "YYMM" << endl;
                }else{
                    cout << "NA" <<endl;
                }
            }else{
                cout << "NA" <<endl;
            }
        }else if(s[1] > '0'){
            if(s[2] == '0'){
                if(s[3] == '0'){
                    cout << "MMYY" << endl;
                }else if(s[3] > '0'){
                    cout << "AMBIGUOUS" <<endl;
                }
            }else if(s[2] == '1'){
                if(s[3] < '3'){
                    cout << "AMBIGUOUS" <<endl;
                }else if(s[3] > '2'){
                    cout << "MMYY" <<endl;
                }
            }else if(s[2] > '1'){
                cout << "MMYY" <<endl;
            }
        }
    }else if(s[0] == '1'){
        if(s[1] < '3'){
            if(s[2] == '0'){
                if(s[3] == '0'){
                    cout << "MMYY" <<endl;
                }else{
                    cout << "AMBIGUOUS" <<endl;
                }
            }else if(s[2] == '1'){
                if(s[3] < '3'){
                    cout << "AMBIGUOUS" <<endl;
                }else{
                    cout << "MMYY" <<endl;
                }
            }else{
                cout << "MMYY" <<endl;
            }
        }else{
            if(s[2] == '0'){
                if(s[3] == '0'){
                    cout << "NA" <<endl;
                }else{
                    cout << "YYMM" <<endl;
                }
            }else if(s[2] == '1'){
                if(s[3] < '3'){
                    cout << "YYMM" <<endl;
                }else{
                    cout << "NA" << endl;
                }
            }else{
                cout << "NA" << endl;
            }
        }
    }else{
        if(s[2] == '0'){
            cout << "YYMM" << endl;
        }else if(s[2] == '1'){
            if(s[3] < '3'){
                cout << "YYMM" << endl;
            }else{
                cout << "NA" << endl;
            }
        }else{
            cout << "NA" << endl;
        }
    }
    return 0;
}