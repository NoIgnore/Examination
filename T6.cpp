// 描述
// 写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。

// 数据范围：保证结果在 1 \le n \le 2^{31}-1 \1≤n≤2
// 31
//  −1
// 输入描述：
// 输入一个十六进制的数值字符串。

// 输出描述：
// 输出该数值的十进制字符串。不同组的测试用例用\n隔开。

// 示例1
// 输入：
// 0xAA
// 复制
// 输出：
// 170
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

bool IfIsPrime(int i)
{
    bool is = true;
    for (int j = 2; j <= sqrt(i); j++)
    {
        if (i % j == 0)
        {
            is = false;
            break;
        }
    }
    return is;
}

int main()
{
    int detectiveNum;
    cin >> detectiveNum;
    for (int i = 2; i <= detectiveNum; i++)
    {
        if (detectiveNum % i == 0)
        {
            while (detectiveNum % i == 0)
            {
                detectiveNum /= i;
                cout << i << " ";
            }
        }
        if (detectiveNum != 1 && IfIsPrime(detectiveNum))
        {
            cout << detectiveNum << " ";
            break;
        }
    }
    return 0;
}
//下面的方法更好
// #include<iostream>
// #include<string>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int s;
//     cin>>s;
//     if(s>1)
//     {
//         int a=sqrt(s);
//         for(int i=2;i<=a;i++)
//         {
//             while(s%i==0) 
//             {
//                 cout<<i<<" ";
//                 s=s/i;
//             }
//         }
//         if(s>1)cout<<s;
//     }
//     return 0;
// }