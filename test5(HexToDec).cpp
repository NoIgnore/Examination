// 描述
// 写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。

// 数据范围：保证结果在 1 \le n \le 2^{31}-1 \1≤n≤2
// 31
//  −1
// 输入描述：
// 输入一个十六进制的数值字符串。

// 输出描述：
// 输出该数值的十进制字符串。不同组的测试用例用\n隔开。

// 示例1
// 输入：
// 0xAA
// 复制
// 输出：
// 170
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int dec = 0;
    for (int i = str.length() - 1; i > 1; i--)
    {
        int mx = str.length() - i - 1;
        int a = str[i] >= 'A' ? str[i] - 'A' + 10 : str[i] - '0';
        dec += a * pow(16, double(mx));
    }
    cout << dec;
    return 0;
}