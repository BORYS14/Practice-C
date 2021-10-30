//1005
#include <stdio.h>

int main(void) {
    int i;
    scanf("%d",&i);

    int num[101];
    int temp[5000];
    int x = 0,temp1;
    for (int j = 0; j < i; j++) {
        scanf("%d",&num[j]);
    }
    for (int j = 0; j < i; j++) {
        temp1 = num[j];
        while (temp1 != 1) {
            if (temp1 % 2 == 0) {
                temp1 = temp1 / 2;
            } else {
                temp1 = (3*temp1+1)/2;
            }
            temp[x] = temp1;
            //printf("%d %d\n",x,temp[x]);
            x++;
        }
    }
    //printf("x=%d\n",x);
    int res[101];
    int y,z = 0;
    for (int j = 0; j < i; j++) {
        y = 0;
        for (int k = 0; k < x; k++) {
            if (num[j] != temp[k]) y++;
        }
        //printf("y=%d\n",y);
        if (y == x) {
            res[z] = num[j];
            z++;
        }
    }
    // printf("z=%d\n",z);
    // printf("%d %d\n",res[0],res[1]);
    for (int j = 0; j < z-1; j++) {
        for (int k = 0; k < z-1-j; k++) {
            int temp2 = res[k+1];
            res[k+1] = (res[k] < res[k+1]) ? res[k] : res[k+1];
            res[k] = (res[k] > temp2) ? res[k] : temp2;
        }
    }
    //printf("%d %d\n",res[0],res[1]);
    for (int j = 0; j < z; j++) {
        printf("%d",res[j]);
        if (z == j+1) break;
        putchar(' ');
    }

    return 0;
}