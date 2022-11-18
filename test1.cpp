// 描述
// 计算字符串最后一个单词的长度，单词以空格隔开，字符串长度小于5000。（注：字符串末尾不以空格为结尾）
// 输入描述：
// 输入一行，代表要计算的字符串，非空，长度小于5000。
// 输出描述：
// 输出一个整数，表示输入字符串最后一个单词的长度。
// 输入：
// hello nowcoder
// 输出：
// 8
// 说明：
// 最后一个单词为nowcoder，长度为8
#include <iostream>
#include <string>
using namespace std;
int main(){
    char a;
    int size = 0;
    do{
        a = getchar();
        if (a == ' '){
            size = 0;
        }
        else if (a != '\n'){
            size ++;
        }
    }while(a!='\n');
    cout<<size;
}
//cin不行，一遇到空格就会断开