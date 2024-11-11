#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> list = {1, 5, 10, 20, 100};
    reverse(list.begin(),list.end());
    
    int data;
    cin >> data;

    int total = 0;
    for(int i:list){
        while(data >= i){
            // cout << data << i << total << endl;
            total += data / i;
            data -= i * (data / i);
        }
    }
    cout << total << endl;
    return 0;
}


