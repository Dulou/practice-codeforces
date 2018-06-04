#include <iostream>
using namespace std;

int main()
{
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    cout<<((((s1==s2)+(s1==s3)+(s1==s4))>0)+(((s2==s3)+(s2==s4))>0)+(s3==s4));
    return 0;
}
//wrong code: cout<<((s1==s2)+(s1==s3)+(s1==s4)+(s2==s3)+(s2==s4)+(s3==s4));