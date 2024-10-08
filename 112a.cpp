#include<iostream>

int main(){
    std::string dataA;
    std::string dataB;
    std::cin >> dataA;
    std::cin >> dataB;

    int ansA = 0;
    for(char i : dataA){
        if(i > 64 && i < 91){
            i += 32;
        }
        ansA += char(i);
    }
    int ansB = 0;
    for(char i : dataB){
        if(i > 64 && i < 91){
            i += 32;
        }
        ansB += char(i);
    }
    if(ansA == ansB){
        std::cout << 0 << std::endl;
    }else if(ansA <= ansB){
        std::cout << -1 << std::endl;
    }else if(ansA >= ansB)
        std::cout << 1 << std::endl;
    return 0;
}