#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<char> stringVec;
    string s;
    cin>>s;
    for(auto i :s) stringVec.push_back(i);
    sort(stringVec.begin(),stringVec.end());
    for(auto i:stringVec) cout<<i;
    return 0;
}
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
    
//     string str;
//     while(cin>>str){
//         sort(str.begin(),str.end());
        
//         cout<<str<<endl;;
//     }
//     return 0;
// }
