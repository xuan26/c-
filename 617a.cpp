#include<iostream>
using namespace std;

int main(){
    int n, num = 0;
    cin >> n;
    
    for(int i = 5; i >= 1; --i){
        while(n != 0){
            if(n - i >= 0 & n >= i){
                n = n-i;
                num++;
            }else{
                break;
            }
        }
    }
    cout << num << endl;

    return 0;
}
