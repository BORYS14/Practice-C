//1037
#include<stdio.h>

int main(void) {
	int a,b,c;
	int x,y,z;
	scanf("%d.%d.%d",&a,&b,&c);
	scanf("%d.%d.%d",&x,&y,&z);
	
    int abc,xyz;
	abc=c+b*29+a*17*29;
	xyz=z+y*29+x*17*29;
	abc-=xyz;
	if(abc>0) putchar('-');
	else abc=-abc;
	
    printf("%d.%d.%d\n",abc/(17*29),abc%(17*29)/29,abc%(17*29)%29);
	
    return 0;
}