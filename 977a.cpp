#include <bits/stdc++.h>
using namespace std;

int main(){
    string data;
    int n;
    cin >> data >> n;

    while(n--){
        if(data[data.size() - 1] != '0'){
            data = to_string(stoi(data) - 1);
        }else{
            data = to_string(stoi(data) / 10);
        }
    }
    cout << data << endl;

    return 0;
}


