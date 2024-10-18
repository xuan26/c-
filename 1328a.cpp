#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int ans = 0;
        int a,b;
        cin >> a >> b;

        if(a % b == 0){
            ans = a / b;
        }else{
            ans = (a / b) + 1;
        }
        
    cout << ans * b - a << endl;
    }
    return 0;
}

