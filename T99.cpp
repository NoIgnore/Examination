// 描述
// 自守数是指一个数的平方的尾数等于该数自身的自然数。例如：25^2 = 625，76^2 = 5776，9376^2 = 87909376。请求出n(包括n)以内的自守数的个数

// 数据范围：1≤n≤10000 

// 输入描述：
// int型整数

// 输出描述：
// n以内自守数的数量。

// 示例1
// 输入：
// 6

// 输出：
// 4

// 说明：
// 有0，1，5，6这四个自守数      
// 示例2
// 输入：
// 1

// 输出：
// 2

// 说明：
// 有0, 1这两个自守数
#include <iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<=n;i++)
    {
        int ten=1;
        for(int j=0;j<to_string(i).length();j++) ten*=10;
        if(i*(i -1 )%ten==0) count++;
    }
    cout<<count<<endl;
    return 0;
}