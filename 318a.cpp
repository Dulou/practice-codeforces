#include <iostream>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    if(k<=(n/2 + n%2))cout<<2*k-1;
    else cout<<2*(k-(n/2 + n%2));
    return 0;
}
