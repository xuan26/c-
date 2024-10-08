#include <iostream>
#include <vector>

int main() {
    // 定義矩陣的尺寸
    const int SIZE = 5;

    // 使用 vector 來儲存 5x5 的矩陣
    std::vector<std::vector<int>> matrix(SIZE, std::vector<int>(SIZE));

    // 讀取矩陣的數據
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if(matrix[i][j] == 1){
                ans = std::abs(i-2) + std::abs(j-2);
                std::cout << ans << std::endl;
            }
        }
    }

    return 0;
}
