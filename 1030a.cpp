#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n ;
    
    int list[n];

    for (int i = 0; i < n; ++i) {
        cin >> list[i]; 
    }

    bool Bool = false;
    for (int i = 0; i < n; ++i) {
        if(list[i] == 1){
            Bool = true;
            break;
        }
    }
    if(Bool){
        cout << "HARD" << endl;
    }else{
        cout << "EASY" << endl;
    }
    return 0;
}


