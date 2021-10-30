//1046
#include<stdio.h>

int main(void) {
	int N;
	scanf("%d",&N);
	
    int suma=0,sumb=0;
	while(N--) {
		int a,b,sa,sb;
		scanf("%d%d%d%d",&a,&sa,&b,&sb);
		
        if(a+b==sa && a+b!=sb) suma++;
		if(a+b==sb && a+b!=sa) sumb++;
	}
	
    printf("%d %d\n",sumb,suma);
	
    return 0;
}