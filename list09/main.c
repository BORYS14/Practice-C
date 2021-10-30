//1004
#include <stdio.h>

int search(int x,int num,int grade[]) {
    int n;
    for (int i = 0; i < num; i++) {
        if (x == grade[i]) n = i;
    }

    return n;
}

int main(void) {
    int num;
    scanf("%d",&num);

    char name[num][11],ID[num][11];
    int grade[num];
    
    for (int i = 0; i < num; i++) {
        int a = 1;
        do { 
            scanf("%s %s %d",name[i],ID[i],&grade[i]);
            for (int j = 0; j < i; j++) {
                if (grade[i] == grade[j]) a = 0;
            }
            if (grade[i] > 100 || grade[i] < 0) a = 0;
        } while (a == 0);
    }

    int max = grade[0], min = grade[0];
    for (int i = 0; i < num; i++) {
        max = (max > grade[i]) ? max : grade[i];
        min = (min < grade[i]) ? min : grade[i];
    }

    int a,b;
    a = search(max,num,grade);
    b = search(min,num,grade);

    printf("%s %s\n",name[a],ID[a]);
    printf("%s %s\n",name[b],ID[b]);

    return 0;
}