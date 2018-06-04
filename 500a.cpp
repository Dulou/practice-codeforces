#include <iostream>
using namespace std;

int main()
{
    int n,t,p,index=1;
    int tmp;
    cin>>n>>t;
    while(index<n){
        cin>>p;
        index += p;
        for(int i=0;i<p-1;i++)cin>>tmp;
        if(index==t){
            cout<<"YES";
            return 0;
        }
        if(index>t){
            cout<<"NO";
            return 0;
        }
    }
}
//Notes: for cycle don't change 'p'