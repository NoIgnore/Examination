// 描述
// 首先输入要输入的整数个数n，然后输入n个整数。输出为n个整数中负数的个数，和所有正整数的平均值，结果保留一位小数。
// 0即不是正整数，也不是负数，不计入计算。如果没有正数，则平均值为0。

// 数据范围： 1 \le n\ \le 2000 \1≤n ≤2000  ，输入的整数都满足 |val| \le 1000 \∣val∣≤1000
// 输入描述：
// 首先输入一个正整数n，
// 然后输入n个整数。

// 输出描述：
// 输出负数的个数，和所有正整数的平均值。

// 示例1
// 输入：
// 11
// 1 2 3 4 5 6 7 8 9 0 -1
// 复制
// 输出：
// 1 5.0
// 复制
// 示例2
// 输入：
// 3
// 0 0 0
// 复制
// 输出：
// 0 0.0
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
    int a = 0, b = 0, d = 0;
    int n;
    cin >> n;
    vector<int> abc;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        if (c > 0)
        {
            abc.push_back(c);
            a++;
        }
        else if (c < 0)
            b++;
        else
            d++;
    }
    if (d == n - b)
    {
        cout << b << " "
             << "0.0" << endl;
        return 0;
    }
    int average = 0;
    for (auto i : abc)
        average += i;
    cout << b << " ";
    printf("%.1f\n", double(average) / a);
    return 0;
}