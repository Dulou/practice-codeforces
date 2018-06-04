#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int all = n;
    while(n/m){
        all += n/m;
        n = n/m+n%m;
    }
    cout<<all;
    return 0;
}
//wrong input:10 2
//wrong code: line 10 : n /= m; all += n;
//calcute next num needs n%m