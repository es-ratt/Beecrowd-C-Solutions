/*Make a program that calculates and shows the volume of a sphere being provided the value of its radius (R) . 
The formula to calculate the volume is: (4/3) * pi * R^3. Consider (assign) for pi the value 3.14159.*/

#include<stdio.h>
#define PI 3.14159
int main(){
    double R, volume;
    scanf("%lf", &R);

    volume = ((4 / 3.0) * PI * (R * R * R));

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}