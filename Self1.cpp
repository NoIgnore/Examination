// 求十进制转任何进制；以Dec->Hex为例
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string Hex16 = "0123456789ABCDEF";
    string s = "";
    while (n > 0)
    {
        char c = Hex16[(n % 16)];
        s = c + s;
        n /= 16;
    }
    cout << s << endl;
    return 0;
}