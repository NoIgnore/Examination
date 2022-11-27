// 描述
// 求一个int类型数字对应的二进制数字中1的最大连续数，例如3的二进制为00000011，最大连续2个1

// 数据范围：数据组数：1\le t\le 5\1≤t≤5 ，1\le n\le 500000\1≤n≤500000
// 进阶：时间复杂度：O(logn)\O(logn) ，空间复杂度：O(1)\O(1)
// 输入描述：
// 输入一个int类型数字

// 输出描述：
// 输出转成二进制之后连续1的个数

// 示例1
// 输入：
// 200

// 输出：
// 2

// 说明：
// 200的二进制表示是11001000，最多有2个连续的1。
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "";
    while (n > 0)
    {
        char c = (n % 2) + '0';
        s = c + s;
        n /= 2;
    }
    int count = 0;
    int temp = 0;
    for (auto i : s)
    {
        if (i == '1')
        {
            temp++;
            if (temp > count)
                count = temp;
        }
        else
            temp = 0;
    }
    cout << count << endl;
    return 0;
}
