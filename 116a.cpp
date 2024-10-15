#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int total = 0;
    int ans = 0;
    while(n--){
        int a,b;
        cin >> a >> b;
        total -= a;
        total += b;

        if(total > ans){
            ans = total;
        }
    }
    cout << ans << endl;
    return 0;
}


