#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    string data;
    cin >> n >> data;
    
    set<int> Set;


    for(char i:data){
        if(i >= 97){
            i -= 32;
        }
        Set.insert(i);
    }    
    // for(char j:Set){
    //     cout << j << endl;
    // }
    if(Set.size() == 26){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}


