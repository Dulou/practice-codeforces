//input means who gives a gift to friend i
//output means who friend i gives a gift to
#include <iostream>
using namespace std;
int main()
{
    int n,num;
    int receive[101];
    int give[101];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
		// number from 1 to n, but list from 0 to n-1
        give[num-1] = i+1;
    }
    for(int i=0;i<n;i++){
        cout<<give[i]<<' ';
    }
    return 0;
}
