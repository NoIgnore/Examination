// 描述
// 任意一个偶数（大于2）都可以由2个素数组成，组成偶数的2个素数有很多种情况，本题目要求输出组成指定偶数的两个素数差值最小的素数对。

// 数据范围：输入的数据满足 4 \le n \le 1000 \4≤n≤1000
// 输入描述：
// 输入一个大于2的偶数

// 输出描述：
// 从小到大输出两个素数

// 示例1
// 输入：
// 20

// 输出：
// 7
// 13

// 示例2
// 输入：
// 4

// 输出：
// 2
// 2
#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;

bool IfIsPrime(int n)
{
    bool is = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            is = false;
    }
    return is;
}

int main()
{
    int a;
    cin >> a;
    unordered_map<int, int> mapA;
    for (int i = 2; i <= a / 2; i++)
    {
        if (IfIsPrime(i) && IfIsPrime(a - i))
        {
            mapA[i] = a - i;
        }
    }
    int b = 0, c = 0;
    for (auto i : mapA)
    {
        if (a > i.second - i.first)
        {
            a = i.second - i.first;
            b = i.second;
            c = i.first;
        }
    }
    cout << c << endl
         << b << endl;
    return 0;
}
