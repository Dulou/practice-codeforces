#include <iostream>
using namespace std;

int main()
{
    int n,h,width=0,height;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>height;
        width += ((height>h)?2:1);
    }
    cout<<width;
    return 0;
}
