#include <iostream>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int letter[26]={0};
    int num = 0;
    for(int i=0;i<s1.length();++i){
        letter[s1[i]-'A']++;
    }
    for(int i=0;i<s2.length();++i){
        letter[s2[i]-'A']++;
    }
    for(int i=0;i<s3.length();++i){
        if(letter[s3[i]-'A']){
            num++;
            letter[s3[i]-'A']--;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<((num==(s1.length()+s2.length()))?"YES":"NO");
    return 0;
}
