#include <iostream>
#include <algorithm>
using namespace std;
struct dragon{
   int life,reward;
};

bool cmp(dragon a,dragon b){
   return a.life<b.life;
}
int main()
{
    int s,n;
    dragon l[1000];
    cin>>s>>n;
    for(int i=0;i<n;i++)cin>>l[i].life>>l[i].reward;
    sort(l,l+n,cmp);
    for(int i=0;i<n;i++){
        if(s>l[i].life)s+=l[i].reward;
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
//注意：sort排序二维或以上数组使用结构体，直接对二维数组排序地址不知如何确定