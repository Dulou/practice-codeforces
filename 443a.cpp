#include <iostream>
using namespace std;

int main()
{
    int letter[26]={0};
    int num=0;
    char c;
    cin>>c;
    for(cin>>c;c!='}';cin>>c){
        if(isalpha(c)){
            if(!letter[c-'a']){
               num++;
               letter[c-'a']++;
            }
        }
    }
    cout<<num;
    return 0;
}
