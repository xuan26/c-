#include<iostream>
#include<string>

int main(){
    std::string data;
    std::cin >> data;
    
    std::string ans = "";
    bool bl = false;
    if(data[0] > 64 && data[0] < 91){
        bl = true;
    }
    if(bl){
        ans += data[0];
    }else{
        ans += char(data[0]) - 32;
    }
    for(int i=1;i<data.length();++i){
        ans += data[i];
    }
    std::cout << ans << std::endl;
    return 0;
}