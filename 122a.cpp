#include <iostream>
using namespace std;
int main()
{
    int division[]={4,7,47,74,447,477,747,774};
    int n;
    cin>>n;
    for(int i=0;i<8;i++){
        if(n%division[i]==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
