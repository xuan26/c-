#include <iostream>
#include <list>
#include <cctype>  // 用於 isdigit 函數
#include <string>  // 用於 std::string

int main() {
    std::string data;
    std::cin >> data;  // 讀取整個字串

    std::list<int> mylist;
    for (char i : data) {  // 遍歷字串中的每個字符
        if (std::isdigit(i)) {  // 檢查字符是否為數字
            mylist.push_back(i - '0');  // 將字符轉換為對應的整數並添加到 list
        }
    }
    mylist.sort();
    
    auto it = mylist.begin();
    while (it != mylist.end()) {
        std::cout << *it;
        ++it;  // 移動到下一個元素
        if (it != mylist.end()) {
            std::cout << "+";
        }
    }
    std::cout << std::endl;

    return 0;
}
