//1026
#include <stdio.h>
#include <math.h>

int main(void) {
    int t1,t2;

    do {
        scanf("%d%d",&t1,&t2);
    } while (t1 >= t2);

    int time = (int)round((t2-t1)/100.0);

    printf("%02d:%02d:%02d",time/3600,time%3600/60,time%60); //%02d

    return 0;
}