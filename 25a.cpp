#include <iostream>
using namespace std;

int main()
{
    int n,evennum=0,oddnum=0,even,odd,num;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>num;
        if(num%2){evennum++;even = i+1;}
        else {oddnum++;odd=i+1;}
    }
    cout<<((oddnum==1)?odd:even);
    return 0;
}
