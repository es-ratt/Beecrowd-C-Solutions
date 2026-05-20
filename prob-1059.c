#include<stdio.h>
int main(){
    int n = 100;
    for(int i = 2; i <= 100; i++){
        if(i % 2 != 0){
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}