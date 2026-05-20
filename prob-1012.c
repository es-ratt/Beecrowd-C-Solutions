#include<stdio.h>
int main(){
    float a, b, c;
    double pi = 3.14159;
    scanf("%f %f %f", &a, &b, &c);

    double triangle = 0.5 * a * c;
    printf("TRIANGULO: %.3lf\n", triangle);

    double radius = pi * c * c;
    printf("CIRCULO: %.3lf\n", radius);

    double trapezium = 0.5 * (a + b) * c;
    printf("TRAPEZIO: %.3lf\n", trapezium);

    double square = b * b;
    printf("QUADRADO: %.3lf\n", square);

    double rectangle = a * b;
    printf("RETANGULO: %.3lf\n", rectangle);

    return 0;
}