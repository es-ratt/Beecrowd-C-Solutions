/*Read a value of floating point with two decimal places. 
This represents a monetary value. After this, calculate the smallest possible number 
of notes and coins on which the value can be decomposed. 
The considered notes are of 100, 50, 20, 10, 5, 2. 
The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. 
Print the message “NOTAS:” followed by the list of notes and 
the message “MOEDAS:” followed by the list of coins.*/

#include<stdio.h>
int main(){
    double N;
    int notas, moedas;

    scanf("%lf", &N);

    N *= 100;

    printf("NOTAS:\n");

    notas = N / 10000;
    printf("%d nota(s) de R$ 100,00\n", notas);
    N -= notas * 10000;

    notas = N / 5000;
    printf("%d nota(s) de R$ 50,00\n", notas);
    N -= notas * 5000;

    notas = N / 2000;
    printf("%d nota(s) de R$ 20,00\n", notas);
    N -= notas * 2000;

    notas = N / 1000;
    printf("%d nota(s) de R$ 10,00\n", notas);
    N -= notas * 100;

    notas = N / 500;
    printf("%d nota(s) de R$ 5,00\n", notas);
    N -= notas * 500;

    notas = N / 200;
    printf("%d nota(s) de R$ 2,00\n", notas);
    N -= notas * 200;

    printf("MOEDAS:\n");

    moedas = N / 100;
    printf("%d moeda(s) de R$ 1,00\n", moedas);
    N -= moedas * 100;

    moedas = N / 50;
    printf("%d moeda(s) de R$ 0,50\n", moedas);
    N -= moedas * 50;

    moedas = N / 25;
    printf("%d moeda(s) de R$ 0,25\n", moedas);
    N -= moedas * 25;

    moedas = N / 10;
    printf("%d moeda(s) de R$ 0,10\n", moedas);
    N -= moedas * 10;

    moedas = N / 5;
    printf("%d moeda(s) de R$ 0,05\n", moedas);
    N -= moedas * 5;

    moedas = N / 1;
    printf("%d moeda(s) de R$ 0,01\n", moedas);
    N -= moedas * 1;

    return 0;
}