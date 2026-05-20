#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if(a+b > c && b+c > a && a+c > b){
        double perimetter = a + b + c;
        printf("Perimetro = %.1lf\n", perimetter);
    } else{
        double area = ((a+b) * c) / 2.0;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}