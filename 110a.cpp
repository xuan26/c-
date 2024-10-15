#include <bits/stdc++.h>
using namespace std;

int main(){
    string data;
    cin >> data;

    vector<int> List = {4,7};

    bool ans = true;
    for(char i:data){
        if(find(List.begin(), List.end(), i - '0') != List.end()){
            continue;
        }else{
            ans = false;
            break;
        }

    }
    if(ans){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}


