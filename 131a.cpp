#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=1;i<s.length();++i){
        if(s[i]>='a'){
            cout<<s;
            return 0;
        }
    }
    if(s[0]>='a')s[0]-=32;
    else s[0]+=32;
    for(int i=1;i<s.length();++i){
        s[i]+=32;
    }
    cout<<s;
    return 0;
}
