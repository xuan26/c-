#include <bits/stdc++.h>
using namespace std;

int main(){
    string dataA;
    string dataB;
    cin >> dataA >> dataB;

    // 將 dataA 和 dataB 轉換為小寫
    transform(dataA.begin(), dataA.end(), dataA.begin(), ::tolower);
    transform(dataB.begin(), dataB.end(), dataB.begin(), ::tolower);

    if(dataA == dataB){
        cout << 0 << endl;
    }else if(dataA <= dataB){
        cout << -1 << endl;
    }else if(dataA >= dataB)
        cout << 1 << endl;
    return 0;
}
