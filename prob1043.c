#include<stdio.h>
int main(){
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);

    float perimeter = A + B + C;
    float area = ((A + B) * C) / 2.0;

    if((A + B > C) && (A + C > B) && (B + C > A)){
        printf("Perimetro = %.1f\n", perimeter);
    } else {
        printf("Area = %.1f\n", area);
    }

    return 0;
}
