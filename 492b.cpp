#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,l;
    int la[1000];
    double radius = 0;
    double tmp;
    cin>>n>>l;
    for(int i=0;i<n;++i){
        cin>>la[i];
    }
    sort(la,la+n);
    radius = max(la[0],l-la[n-1]);
    for(int i=0;i<n-1;++i){
        tmp = (la[i+1]-la[i])/double(2);
        if(tmp>radius)radius = tmp;
    }
    cout<<fixed<<radius;
    return 0;
}
//注意：显示多位小数：cout<<fixed<<..