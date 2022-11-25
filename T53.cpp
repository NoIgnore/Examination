//杨辉三角的变形
#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n <= 2) //小于等于2的行没有偶数
            cout << -1 << endl;
        else{
            if(n % 2) //奇数行偶数在第2个
                cout << 2 << endl;
            else if(n % 4 == 2) //偶数除4余2的在第4个
                cout << 4 << endl;
            else if(n % 4 == 0) //整除4的在第3个
                cout << 3 << endl;
        }
    }
    return 0;
}
