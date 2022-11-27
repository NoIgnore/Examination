// 描述
// 判断短字符串S中的所有字符是否在长字符串T中全部出现。
// 请注意本题有多组样例输入。
// 数据范围:1\le len(S),len(T)\le200\1≤len(S),len(T)≤200
// 进阶：时间复杂度：O(n)\O(n) ，空间复杂度：O(n)\O(n)
// 输入描述：
// 输入两个字符串。第一个为短字符串，第二个为长字符串。两个字符串均由小写字母组成。

// 输出描述：
// 如果短字符串的所有字符均在长字符串中出现过，则输出字符串"true"。否则输出字符串"false"。

// 示例1
// 输入：
// bc
// abc

// 输出：
// true

// 说明：
// 其中abc含有bc，输出"true"
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    string shortS, longS;
    while (cin >> shortS >> longS)
    {
        bool res = true;
        unordered_map<char, int> mapA;
        for (auto i : longS)
            mapA[i] = 1;
        for (auto i : shortS)
            if (mapA[i] != 1)
                res = false;
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
