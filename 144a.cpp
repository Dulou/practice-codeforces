#include <iostream>
using namespace std;

int main()
{
    int n,a;
    int minvalue=100,maxvalue=0;
    int min_i=0,max_i=0;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a;
        //<= move fast
        if(a<=minvalue){
            minvalue = a;
            min_i = i;
        }
        if(a>maxvalue){
            maxvalue = a;
            max_i = i;
        }
    }
    cout<<max_i+n-1-min_i-(max_i>min_i);
    return 0;
}
