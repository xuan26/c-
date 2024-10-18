#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n ;
    
    vector<int> list(n);
    for (int i = 0; i < n; ++i) {
        cin >> list[i]; 
    }
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += list[i];
    }
    double con = n * 100;
    cout << (total / con) * 100  << endl; 
    return 0;
}

