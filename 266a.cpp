#include<iostream>
using namespace std;



int main(){
    int n, num = 0;
    cin >> n;
    string data;
    cin >> data;

    for(int i = 1; i < n; ++i){
        if(data[i-1] == data[i]){
            num++;
        }
    }
    cout << num << endl;

    return 0;
}
