// 描述
// 对字符串中的所有单词进行倒排。

// 说明：

// 1、构成单词的字符只有26个大写或小写英文字母；

// 2、非构成单词的字符均视为单词间隔符；

// 3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，倒排转换后也只允许出现一个空格间隔符；

// 4、每个单词最长20个字母；

// 数据范围：字符串长度满足1≤n≤10000
// 输入描述：
// 输入一行，表示用来倒排的句子

// 输出描述：
// 输出句子的倒排结果

// 示例1
// 输入：
// I am a student

// 输出：
// student a am I

// 示例2
// 输入：
// $bo*y gi!r#l

// 输出：
// l r gi y bo
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    vector<string> vec;
    getline(cin, s);
    string s2 = "";
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            s2 += s[i];
        }
        else if (s2 != "")
        {
            vec.push_back(s2);
            s2 = "";
        }
    }
    vec.push_back(s2);
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        cout << vec[i] << " ";
    }
    return 0;
}