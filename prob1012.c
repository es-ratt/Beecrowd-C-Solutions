#include<stdio.h>
#define PI 3.14159
int main(){

    double A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);

    double result1, result2, result3, result4, result5;

    result1 = (A * C) / 2 ;
    result2 = PI * C * C;
    result3 = (0.5 * (A + B) * C);
    result4 = B * B;
    result5 = A * B;

    printf("TRIANGULO: %.3lf\n", result1);
    printf("CIRCULO: %.3lf\n", result2);
    printf("TRAPEZIO: %.3lf\n", result3);
    printf("QUADRADO: %.3lf\n", result4);
    printf("RETANGULO: %.3lf\n", result5);

    return 0;
}