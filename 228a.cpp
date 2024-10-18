#include <bits/stdc++.h>
using namespace std;

int main(){
    int s1,s2,s3,s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> list;

    list.insert(s1);
    list.insert(s2);
    list.insert(s3);
    list.insert(s4);

    int ans = list.size();
    cout << 4 - ans << endl;

    return 0;
}

