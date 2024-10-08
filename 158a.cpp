#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,score;
    cin >> n >> score;

    vector<int> data(n);
    for (int &i:data){
        cin >> i;
    }
    int total = 0;
    for (int i = 0; i < data.size(); i++){
        if(data[i] >= data[score-1] && data[i] != 0){
            total++;
        }
    }
    
    cout << total << endl;
    return 0;
}