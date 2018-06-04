#include <iostream>
using namespace std;

int main()
{
    int n;
    int home[30],guest[30];
    int num=0;
    cin>>n;
    for(int i=0;i<n;++i)cin>>home[i]>>guest[i];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(home[i]==guest[j])num++;
        }
    }
    cout<<num;
    return 0;
}
