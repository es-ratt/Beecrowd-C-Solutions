// Using the following table, write a program that reads a code and the amount of an item.
// After, print the value to pay. This is a very simple program with the only 
// intention of practice of selection commands.

#include<stdio.h>
int main(){
    int X, Y;
    double total;
    scanf("%d%d", &X, &Y);

    if(X == 1){
        total = 4.00 * Y;
    } 
    else if (X == 2){
        total = 4.50 * Y;
    } 
    else if (X == 3){
        total = 5.00 * Y;
    } 
    else if (X == 4){
        total = 2.00 * Y;
    } 
    else if (X == 5){
        total = 1.50 * Y;
    }

    printf("Total: R$ %.2lf\n", total);

    return 0;
}

