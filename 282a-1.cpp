#import<cstdio>
char s[4];
int x;
main(){
	for(gets(s);gets(s);x+=44-s[1]);
	//first gets(s) only run once
	//ascii: +:43 -:45
	printf("%d",x);
}