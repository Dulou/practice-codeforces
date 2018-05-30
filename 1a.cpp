#include <iostream>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    //use 1LL to convert the num to long long int
    cout<<1LL*((n+a-1)/a)*((m+a-1)/a);
    return 0;
}
// first wrong input: 1 1 1(n=a)
// wrong code:cout<<1LL*(n/a+1)*(m/a+1);
