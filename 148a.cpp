#include <bits/stdc++.h>
using namespace std;

int main() {
    int k; int l; int m; int n; int d; 
    cin >> k >> l >> m >> n >> d;
    
    set<int> Set;

    for (int i = 1; i <= d; i++)
    {
        if(i % k == 0){
            Set.insert(i);
        }
        if(i % l == 0){
            Set.insert(i);
        }
        if(i % m == 0){
            Set.insert(i);
        }
        if(i % n == 0){
            Set.insert(i);
        }
    }

    cout << Set.size() << endl;

    // cout << k << l << m << n << d << endl;

    return 0;
}


