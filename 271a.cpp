#include <iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    year++;
    int a=year/1000;
    int b=year/100%10;
    int c=year/10%10;
    int d=year%10;
    while(a==b||a==c||a==d||b==c||b==d||c==d){
        year++;
        a=year/1000;
        b=year/100%10;
        c=year/10%10;
        d=year%10;
    }
    cout<<year;
    return 0;
}
