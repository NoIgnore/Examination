// 写出一个程序，接受一个由字母、数字和空格组成的字符串，和一个字符，然后输出输入字符串中该字符的出现次数。（不区分大小写字母）

// 数据范围： 1 <= n <= 1000
// 输入描述：
// 第一行输入一个由字母和数字以及空格组成的字符串，第二行输入一个字符。

// 输出描述：
// 输出输入字符串中含有该字符的个数。（不区分大小写字母）

// 示例1
// 输入：
// ABCabc
// A

// 输出：
// 2
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    string s;
    char c;
    getline(cin, s);
    cin >> c;
    unordered_map<char, int> mapA;
    for (int i = 0; i < s.length(); i++)
    {
        mapA[tolower(s[i])] += 1;
    }
    cout << mapA[tolower(c)];
    return 0;
}