#include <bits/stdc++.h>
using namespace std;

int main(){
    string data;
    cin >> data;
    
    string ans = "";
    bool bl = false;
    if(data[0] > 64 && data[0] < 91){
        bl = true;
    }
    if(bl){
        ans += data[0];
    }else{
        ans += char(data[0]) - 32;
    }
    for(int i=1;i<data.length();++i){
        ans += data[i];
    }
    cout << ans << endl;
    return 0;
}
