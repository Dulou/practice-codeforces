#include <iostream>
using namespace std;
//thinking:
/**
   最多每个组一辆taxi，考虑怎么安排可以使得减少的taxi最多
   1和3配对，1个1减少1辆；2个1和1个2配对，原本需要3，配对后需要1，同样1个1减少1辆
   4个1配对，1个1只减少3/4辆，因此首先考虑1和3以及2个1和1个2配对
   1和3配对：taxi只考虑3的情况即可，此时剩余的1为：num[0] -= num[2]
   2个1和2配对：相当于2的数量增加了num[0]/2个，此时num[0]要么剩下1个，要么剩下0个
        剩下0个：直接对2分配即可；剩下1个：当对2分配时，剩下1个和2个效果等同，因此2的数量+1即可
		注意：这里可以看成对1分配，大小为2，即2的数量增加(num[0]+1)/2个
   对2分配：(num[1]+1)/2
   总体来看，对2分配可以看成((num[1]+(num[0]+1)/2)+1)/2 = (num[0]+2*num[1]+3)/4,和Codeforces上排名最高的解答相同
**/
int main()
{
    int n;
    int num[4]={0};
    int taxi = 0;
    int tmp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        num[tmp-1] += 1;
    }
    num[0] -= num[2];
    taxi += num[2]+num[3];
    if(num[0]>0){
        num[1] += num[0]/2+num[0]%2;
    }
    taxi += (num[1]+1)/2;
    cout<<taxi;

    return 0;
}
