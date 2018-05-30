#include <iostream>
using namespace std;
int main()
{
    int n;
    int p,q;
    int dorm=0;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>p>>q;
        dorm += (((q-p)>1)?1:0);
    }
    cout<<dorm;
    return 0;
}
