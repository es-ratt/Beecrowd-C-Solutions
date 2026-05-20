#include<Stdio.h>
int main(){
    int n;
    int count = 0;

    scanf("%d", &n);
    int a = 1, b = 2, c;

    while(1){
        c = a + b;

        for(int i = b + 1; i < c; i++){
            count++;

            if(count == n){
                printf("%d\n", i);
                return 0;
            }
        }
        a = b;
        b = c;
    }
    return 0;
}