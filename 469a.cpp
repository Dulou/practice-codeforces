#include <iostream>
using namespace std;

int main()
{
    int n,p,a;
    int num=0;
    int record[101]={0};
    cin>>n;
    while(cin>>p){
        for(int i=0;i<p;++i){
            cin>>a;
            if(!record[a]){
                record[a]++;
                num++;
            }
        }
    }
    cout<<((num==n)?"I become the guy.":"Oh, my keyboard!");
    return 0;
}
