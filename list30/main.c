//1056
#include<stdio.h>

int main(void) {
    int a[10];
    int i,j,n,sum=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i!=j) sum+=a[i]*10+a[j];
        }
    }

    printf("%d",sum);
    
    return 0;
}
