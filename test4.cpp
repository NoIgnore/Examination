// 描述
// •输入一个字符串，请按长度为8拆分每个输入字符串并进行输出；

// •长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
// 输入描述：
// 连续输入字符串(每个字符串长度小于等于100)

// 输出描述：
// 依次输出所有分割后的长度为8的新字符串

// 示例1
// 输入：
// abc

// 输出：
// abc00000
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while (cin >> str)
    {
        // 补0
        int len = str.size();
        if (len % 8 != 0)
        {
            int count = 8 - len % 8;
            str.append(count, '0');
        }

        // 按格式输出
        int newLen = str.size();
        for (int i = 0; i < newLen; i += 8)
        {
            cout << str.substr(i, 8) << endl;
        }
    }
    return 0;
}