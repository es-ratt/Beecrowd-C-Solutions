#include<stdio.h>
int main(){
    int n, sqr = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i %2 != 0){
            continue;
        }
        sqr = i * i;
        printf("%d^2 = %d\n", i, sqr);
    }
    return 0;
}