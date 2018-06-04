#include <iostream>
using namespace std;

int main()
{
    int alphabet[26]={0};
    int num=0,n;
    char c;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>c;
        if(c<='Z')c += 32;
        if(!alphabet[c-'a']){
            alphabet[c-'a']++;
            num++;
        }
    }
    cout<<((num==26)?"YES":"NO");
    return 0;
}
