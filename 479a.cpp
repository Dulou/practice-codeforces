#include <iostream>
using namespace std;
int main()
{
    int a,b,c,res=0,tmp;
    cin>>a>>b>>c;
    tmp = a+b*c;
    if(tmp>res)res=tmp;
    tmp = (a+b)*c;
    if(tmp>res)res=tmp;
    tmp = a+b+c;
    if(tmp>res)res=tmp;
    tmp = a*b*c;
    if(tmp>res)res=tmp;
    tmp = a*b+c;
    if(tmp>res)res=tmp;
    tmp = a*(b+c);
    if(tmp>res)res=tmp;
    cout<<res;
    return 0;
}
