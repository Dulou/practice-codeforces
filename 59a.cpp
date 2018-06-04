#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100];
    int m=0;
    cin>>s;
    int b=strlen(s);
    for(int i=0;i<b;i++){
        if(s[i]>='a')m++;
    }
    cout<<((m<b-m)?strupr(s):strlwr(s));
    return 0;
}
