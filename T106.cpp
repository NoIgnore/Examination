// 描述
// 将一个字符串str的内容颠倒过来，并输出。

// 数据范围：1 \le len(str) \le 10000\1≤len(str)≤10000
// 输入描述：
// 输入一个字符串，可以有空格

// 输出描述：
// 输出逆序的字符串

// 示例1
// 输入：
// I am a student
// 复制
// 输出：
// tneduts a ma I
// 复制
// 示例2
// 输入：
// nowcoder
// 复制
// 输出：
// redocwon
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = s.length() - 1; i >= 0; i--)
    {
        cout<<s[i];
    }
    return 0;
}