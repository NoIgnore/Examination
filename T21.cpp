// 描述
// 现在有一种密码变换算法。
// 九键手机键盘上的数字与字母的对应： 1--1， abc--2, def--3, ghi--4, jkl--5, mno--6, pqrs--7, tuv--8 wxyz--9, 0--0，把密码中出现的小写字母都变成九键键盘对应的数字，如：a 变成 2，x 变成 9.
// 而密码中出现的大写字母则变成小写之后往后移一位，如：X ，先变成小写，再往后移一位，变成了 y ，例外：Z 往后移是 a 。
// 数字和其它的符号都不做变换。
// 数据范围： 输入的字符串长度满足  1≤n≤100
// 输入描述：
// 输入一组密码，长度不超过100个字符。

// 输出描述：
// 输出密码变换后的字符串

// 示例1
// 输入：
// YUANzhi1987

// 输出：
// zvbo9441987
/*
本文系「人工智能安全」（微信公众号）原创，转载请联系本文作者（同博客作者）。
欢迎你转发分享至朋友圈，并给予「关注、星标、点赞」三连支持。互相欣赏，互相批判。
我是一名有诗人气质的网络安全工程师
期待与你的思想交流碰撞出智慧的花火
水木清华
2020-03-15
简单密码
*/
#include <iostream>
#include <string>
using namespace std;
//密码（口令）变换的函数接口
string Password_Transformation(string str)
{
    //字典法：考虑两个字典，一个是明文字典 a[]，另一个是明文对应的加密字典 b[]。
    //然后采用字典元素对应的方法，做加密或解密，实现方法为“字典下标对应索引以及元素匹配”。
    char a[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"}; //非必要的参照字典
    char b[] = {"bcdefghijklmnopqrstuvwxyza222333444555666777788899990123456789"}; //字符输出对应字典
    int len = str.size();
    for (int i = 0; i < len; i++)
    {
        //小写字母转数字
        if ((str[i] >= 'a') && (str[i] <= 'z'))
        {
            str[i] = b[str[i] - 'a' + 26];
        }
        //大写字母转小写
        if ((str[i] >= 'A') && (str[i] <= 'Z'))
        {
            str[i] = b[str[i] - 'A'];
        }
        //数字不用转换，保持原样
    }
    return str;
}
//主函数
int main()
{
    string str;
    while (getline(cin, str))
    {
        cout << Password_Transformation(str) << endl;
    }
    return 0;
}
//笨方法：为每一种情况写一个 if 判别语句，对应输出结果即可，