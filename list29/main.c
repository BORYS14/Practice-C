//1047
#include<stdio.h>

int main() {
    int sum[1001]={0};
    int n,i;
    scanf("%d",&n);
    
    int team,num,grade;
    for(i = 0; i < n; i++) {
        scanf("%d-%d %d",&team,&num,&grade);
        sum[team] += grade;
    }

    int max_team,max_sum;
    for(i=1;i<1001;i++) {
       if(max_sum<sum[i]) {
            max_sum = sum[i];
            max_team = i;
       }
    }

    printf("%d %d",max_team,max_sum);

    return 0;
}
