
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string data;
    cin >> data;

    int a = 0; int d = 0;
    
    for(char i:data){
        if(i == 'A'){
            a++;
        }else if(i == 'D'){
            d++;
        }
    }
    if(a > d){
        cout << "Anton" << endl;
    }else if(a < d){
        cout << "Danik" << endl;
    }else{
        cout << "Friendship" << endl;
    }
    return 0;
}


