#include <bits/stdc++.h>
using namespace std;

int main() {
    const int SIZE = 5;
    
    // 儲存 5x5 
    vector<vector<int>> matrix(SIZE, vector<int>(SIZE));

    // 讀取資料
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matrix[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if(matrix[i][j] == 1){
                ans = abs(i-2) + abs(j-2);
                cout << ans << endl;
            }
        }
    }

    return 0;
}
