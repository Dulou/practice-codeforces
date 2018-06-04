#include <iostream>
using namespace std;

int main()
{
    string mas[] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
    int n;
    cin>>n;
    while(n>5)n=(n-5+1)/2;
    cout<<mas[n-1];
    return 0;
}
//注意：n-5减去初始5个单个的，然后除以2（实际上是对2分配确定位置），不断循环确定位置