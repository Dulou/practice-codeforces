#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int m,n;
    int piece[51];
    int diff = 1000;
    cin>>n>>m;
    for(int i=0;i<m;i++)cin>>piece[i];
    sort(piece,piece+m);
    for(int i=0;i<=m-n;i++){
        if(piece[i+n-1]-piece[i]<diff)diff = piece[i+n-1]-piece[i];
    }
    cout<<diff;
    return 0;
}
//wrong input: 2 2 \n 4 4
//wrong code:
//line 12: for(int i=0;i<m-n;i++)
