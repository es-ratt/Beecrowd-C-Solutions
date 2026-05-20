#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    return(*(int *)a - *(int *)b);
}

int main(){
    int t;
    scanf("%d", &t);

    for(int cs=1; cs <= t; cs++){
        int n;
        scanf("%d", &n);

        int ages[10];
        for(int i =0; i < n; i++){
            scanf("%d", &ages[i]);
        }

        qsort(ages, n, sizeof(int), compare);

        int captain_age = ages[n / 2];
        printf("Case %d = %d\n", cs, captain_age);
    }

    return 0;
}