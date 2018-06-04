#include <iostream>
using namespace std;

int main()
{
    int n;
    char m;
    int a=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        if(m=='A')a++;
    }
    if(a==n-a)cout<<"Friendship";
    else cout<<((a>n-a)?"Anton":"Danik");
    return 0;
}
