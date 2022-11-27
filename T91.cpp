// 描述
// 请计算n*m的棋盘格子（n为横向的格子数，m为竖向的格子数）从棋盘左上角出发沿着边缘线从左上角走到右下角，总共有多少种走法，要求不能走回头路，即：只能往右和往下走，不能往左和往上走。

// 注：沿棋盘格之间的边缘线行走

// 数据范围： 1 \le n,m \le 8 \1≤n,m≤8

// 输入描述：
// 输入两个正整数n和m，用空格隔开。(1≤n,m≤8)

// 输出描述：
// 输出一行结果

// 示例1
// 输入：
// 2 2
// 复制
// 输出：
// 6
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    while (cin >> n >> m)
    {
        vector<vector<int>> dp(n + 1, vector<int>(m + 1,
                                                  0)); // dp[i][j]表示到第i行j列为止的方案数
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 && j == 0) //最开始，一种方法
                    dp[i][j] = 1;
                else if (i == 0) //行数到顶，等于旁边列的方法
                    dp[i][j] = dp[i][j - 1];
                else if (j == 0) //列数到左边，等于旁边行的方法
                    dp[i][j] = dp[i - 1][j];
                else //等于左边加上边的方法
                    dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            }
        cout << dp[n][m] << endl;
    }
    return 0;
}
