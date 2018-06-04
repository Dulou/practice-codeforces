#include <iostream>
using namespace std;

int main()
{
    int n,m;
    int pre=1,now;
    long long int time=0;
    cin>>n>>m;
    for(int i=0;i<m;++i){
        cin>>now;
        time += ((now<pre)?now+n-pre:now-pre);
        pre = now;
    }
    cout<<time;
    return 0;
}
