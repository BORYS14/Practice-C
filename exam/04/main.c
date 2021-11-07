#include <stdio.h>

int getInfo(int ID[], int grade[], int n) {
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&ID[i]);
        scanf("%d",&grade[i]);
    }

    return n;
}

void scoreSort(int ID[], int grade[], int n) {
    int temp1, temp2;
    int max = grade[0];

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (grade[j] > grade[j+1]) {
                temp1 = grade[j];
                grade[j] = grade[j+1];
                grade[j+1] = temp1;

                temp2 = ID[j];
                ID[j] = ID[j+1];
                ID[j+1] = temp2;
            }
        }
    }
}

void outputAsc(int ID[], int grade[], int n) {
    printf("升序：\n");
    for (int i = 0; i < n; i++) {
        printf("%d %d\n",ID[i],grade[i]);
    }
}

void outputDesc(int ID[], int grade[], int n) {
    printf("降序：\n");
    for (; n > 0; n--) {
        printf("%d %d\n",ID[n-1],grade[n-1]);
    }
}

int main(void) {
    int n;
    int ID[100];
    int grade[100];

    n = getInfo(ID,grade,n);
    scoreSort(ID,grade,n);
    outputAsc(ID,grade,n);
    outputDesc(ID,grade,n);

    return 0;
}