#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,num,pre,len=1,res=0;
    cin>>n;
    cin>>pre;
    while(cin>>num){
        if(num<pre){
            if(len>res)res = len;
            len = 1;
        }
        else{
            len += 1;
        }
        pre = num;
    }
    if(len>res)res = len;
    cout<<res;
    return 0;
}
//wrong input:6 \n 2 2 1 3 4 1
//wrong code: line 6/line 12: len = 0(consider pre already,len=1)

//wrong input:3 \n 2 2 9
//wrong code: forget line 19, list including last one is not considered
