// 描述
// 实现删除字符串中出现次数最少的字符，若出现次数最少的字符有多个，则把出现次数最少的字符都删除。输出删除这些单词后的字符串，字符串中其它字符保持原来的顺序。

// 数据范围：输入的字符串长度满足 1≤n≤20  ，保证输入的字符串中仅出现小写字母
// 输入描述：
// 字符串只包含小写英文字母, 不考虑非法输入，输入的字符串长度小于等于20个字节。

// 输出描述：
// 删除字符串中出现次数最少的字符后的字符串。

// 示例1
// 输入：
// aabcddd
// 复制
// 输出：
// aaddd
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int min = 21;
    string s;
    cin >> s;
    unordered_map<char, int> mapA;
    vector<char> charVec;
    for (int i = 0; i < s.length(); i++)
    {
        mapA[s[i]] = !mapA[s[i]] ? 1 : mapA[s[i]] + 1;
        charVec.push_back(s[i]);
    }
    for (auto i : mapA)
        if (min > i.second)
            min = i.second;
    for (int i = 0; i < charVec.size(); i++)
    {
        if (mapA[charVec[i]] != min)
            cout << charVec[i];
    }
    return 0;
}