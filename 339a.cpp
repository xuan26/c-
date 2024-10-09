#include <bits/stdc++.h>
using namespace std;

int main() {
    string data;
    cin >> data;

    list<int> mylist;
    for (char i : data) { 
        if (isdigit(i)) { 
            mylist.push_back(i - '0'); 
        }
    }
    mylist.sort();
    
    auto it = mylist.begin();
    while (it != mylist.end()) {
        cout << *it;
        ++it;  // 移動到下一個元素
        if (it != mylist.end()) {
            cout << "+";
        }
    }
    cout << endl;

    return 0;
}