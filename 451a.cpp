#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    n = (n>m)?m:n;
    cout<<((n%2)?"Akshat":"Malvika");
    return 0;
}
