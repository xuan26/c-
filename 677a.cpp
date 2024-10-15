#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin >> n >> h;
    
    int num[n];
    for (int i = 0; i < n; i++){
        cin >> num[i];
    }
    
    int total = 0;
    for (int i = 0; i < n; i++){
        if(num[i] > h){
            total += 2;
        }else{
            total++;
        }
    }
    
    cout << total << endl;    
    return 0;
}


