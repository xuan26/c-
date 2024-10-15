#include <bits/stdc++.h>
using namespace std;

int main(){
    string data1;
    string data2;
    cin >> data1 >> data2;

    reverse(data2.begin(), data2.end());
    if(data1 == data2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}


