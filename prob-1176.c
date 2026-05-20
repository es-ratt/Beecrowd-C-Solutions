#include<stdio.h>
int main(){
    int t, n;
    long long fib[61];
    scanf("%d", &t);

    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    while(t--){
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, fib[n]);
    }
    return 0;
}