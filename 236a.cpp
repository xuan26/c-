#include <bits/stdc++.h>
using namespace std;

int main(){
    string data;
    cin >> data;

    set<char> list;
    for(char i:data){
        list.insert(i);
    }

    if(list.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
