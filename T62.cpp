// 描述
// 输入一个正整数，计算它在二进制下的1的个数。
// 注意多组输入输出！！！！！！

// 数据范围： 1 \le n \le 2^{31}-1 \1≤n≤2
// 31
//  −1
// 输入描述：
// 输入一个整数

// 输出描述：
// 计算整数二进制中1的个数

// 示例1
// 输入：
// 5
// 复制
// 输出：
// 2
// 复制
// 说明：
// 5的二进制表示是101，有2个1
// 示例2
// 输入：
// 0
// 复制
// 输出：
// 0
#include <iostream>
using namespace std;

int main()
{
    int a;
    while (cin >> a)
    {
        if (a == 0 || a == 1)
            cout << a << endl;
        else
        {
            string s = "";
            int count = 0;
            while (a > 0)
            {
                if (a % 2 == 1)
                    count++;
                a /= 2;
            }
            cout << count << endl;
        }
    }
    return 0;
}
// #include <bitset>//善用bitset
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     while (cin >> n)
//     {
//         bitset<32> b(n);
//         cout << b.count() << endl;
//     }
// }
