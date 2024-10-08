#include <iostream>
#include <sstream>
#include <vector>

int main(){
    int n,score;
    std::cin >> n >> score;

    std::vector<int> numbers(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    int total = 0;
    for (size_t i = 0; i < numbers.size(); ++i) {
        if(numbers[i] >= numbers[score-1] && (numbers[i] != 0 && numbers[score-1] != 0)){
            total++;
        }
    }   
    std::cout << total << std::endl;
    return 0;
}