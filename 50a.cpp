#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;

    int b,s;
    if(m > n){
        b = m; s = n;
    }else{
        b = n; s = m;
    }
    int ans = 0;
    ans = b / 2 * s;
    if(b % 2 == 1){
        ans += s / 2;
    }
    cout << ans << endl;
}