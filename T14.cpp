// 描述
// 给定 n 个字符串，请对 n 个字符串按照字典序排列。

// 数据范围： 1≤n≤1000  ，字符串长度满足 1≤len≤100
// 输入描述：
// 输入第一行为一个正整数n(1≤n≤1000),下面n行为n个字符串(字符串长度≤100),字符串中只含有大小写字母。
// 输出描述：
// 数据输出n行，输出结果为按照字典序排列的字符串。
// 示例1
// 输入：
// 9
// cap
// to
// cat
// card
// two
// too
// up
// boat
// boot

// 输出：
// boat
// boot
// cap
// card
// cat
// to
// too
// two
// up
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<string> vec;
    while (a-- > 0)
    {
        string s;
        cin >> s;
        vec.push_back(s);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << endl;
}