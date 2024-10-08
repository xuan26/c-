#include<bits/stdc++.h>

int main(){
    int data;
    std::cin >> data;  // 輸入西瓜重量

    if(data % 2 == 0 && data > 2)  {
        std::cout << "YES" << std::endl;
    }else{
        std::cout << "NO" << std::endl;
    }

    return 0;
};