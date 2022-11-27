// 描述
// 给定一个仅包含小写字母的字符串，求它的最长回文子串的长度。
// 所谓回文串，指左右对称的字符串。
// 所谓子串，指一个字符串删掉其部分前缀和后缀（也可以不删）的字符串
// 数据范围：字符串长度  1≤s≤350
// 进阶：时间复杂度：O(n)\O(n) ，空间复杂度：O(n)\O(n)
// 输入描述：
// 输入一个仅包含小写字母的字符串

// 输出描述：
// 返回最长回文子串的长度

// 示例1
// 输入：
// cdabbacc

// 输出：
// 4

// 说明：
// abba为最长的回文子串
#include <iostream>
using namespace std;

bool check(string s, int l, int r)
{
    for (; l < r; l++, r--)
        if (s[l] != s[r])
            return false;
    return true;
    // 这里我们判断一个字符串是不是回文串
}

signed main()
{
    string s;
    cin >> s;
    int maxx = INT_MIN;
    // 这个maxx是我们的最长回文子串的一个长度
    for (int i = 0; i < s.size(); i++)
    {
        // 我们第一层循环枚举的是我们这个字符串的一个起点的位置
        for (int j = i; j < s.size(); j++)
        {
            // 我们的第二层循环是用来循环我们的结尾的位置是在哪里的
            if (check(s, i, j))
            {
                maxx = max(maxx, j - i + 1);
                // 如果我们当前的这个字符串是回文串，我们更新一下最大的长度
            }
        }
    }
    cout << maxx << "\n";
    return 0;
}
