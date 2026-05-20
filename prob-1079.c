#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        float a, b, c;
        scanf("%f %f %f", &a, &b, &c);

        float avrg = (a * 2 + b *3 + c * 5) /10;
        printf("%.1f\n", avrg);
    }
    return 0;
}