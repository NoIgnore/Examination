// 描述
// 蛇形矩阵是由1开始的自然数依次排列成的一个矩阵上三角形。

// 例如，当输入5时，应该输出的三角形为：

// 1 3 6 10 15

// 2 5 9 14

// 4 8 13

// 7 12

// 11


// 输入描述：
// 输入正整数N（N不大于100）

// 输出描述：
// 输出一个N行的蛇形矩阵。

// 示例1
// 输入：
// 4
// 复制
// 输出：
// 1 3 6 10
// 2 5 9
// 4 8
// 7
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; 
    while(cin >> n){
        vector<vector<int> > matrix(n, vector<int>(n, 0)); //定义一个n*n的矩阵
        int num = 1;
        for(int i = 0; i < n; i++){
            int j = i, k = 0;
            while(j >= 0){
                matrix[j][k] = num; //录入数字
                num++;
                j--; //往右上方移
                k++;
            }
        }
        for(int i = 0; i < n; i++){ //遍历数组每一行
            int j = 0;
            while(matrix[i][j] != 0 && j < n){ //每行只输出前面非零部分
                cout << matrix[i][j] << " ";
                j++;
            }
            cout << endl; //换行
        }
    }
    return 0;
}
