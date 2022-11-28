#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c = min(a, b);
    int general = 1;
    for (int i = 2; i <= c; i++)
    {
        if (a % i == 0 && b % i == 0)
            general = i;
    }
    cout << (a * b) / general << endl;
    return 0;
}