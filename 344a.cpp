#include <iostream>
using namespace std;

int main()
{
    int group=1;
    int n;
    int tmp,pre;
    cin>>n;
    cin>>pre;
    for(int i=1;i<n;++i){
        cin>>tmp;
        if(tmp!=pre)group++;
        pre = tmp;
    }
    cout<<group;
    return 0;
}
