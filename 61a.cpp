#include <bits/stdc++.h>
using namespace std;

int main(){
    string data;
    string data2;

    cin >> data >> data2;

    for (int i = 0; i < data.length(); i++)
    {
        int result = data[i] ^ data2[i];
        cout << result ;
    }
    

    

    return 0;
}

