#include<stdio.h>
int main(){
    int n;
    int maxVal = 0;
     int maxPos = 0;

    for(int i = 0; i < 100; i++){
        scanf("%d", &n);

        if(n > maxVal){
            maxVal = n;
            maxPos = i;
    }
}
    printf("%d\n%d\n", maxVal, maxPos);
    return 0;
}