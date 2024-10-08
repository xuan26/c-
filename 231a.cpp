#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int n;
    cin >> n;

    int ans = 0;

    while(n--){
        int a,b,c;
        cin >> a >> b >> c;

        if((a + b + c) > 1){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
