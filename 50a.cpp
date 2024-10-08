#include<iostream>

int main(){
    int m,n;
    std::cin >> m >> n;

    int b,s;
    if(m > n){
        b = m; s = n;
    }else{
        b = n; s = m;
    }
    int ans = 0;
    ans = b / 2 * s;
    if(b % 2 == 1){
        ans += s / 2;
    }
    std::cout << ans << std::endl;
}