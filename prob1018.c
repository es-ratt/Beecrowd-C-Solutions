/*In this problem you have to read an integer value and calculate 
the smallest possible number of banknotes in which the value may be decomposed. 
The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.*/

#include<stdio.h>
int main(){
    int N, note;
    scanf("%d", &N);
    printf("%d\n", N);

    int denominations[]= {100, 50, 20, 10, 5, 2, 1};

    for(int i = 0; i < 7; i++){
        note = N / denominations[i];
        printf("%d nota(s) de R$ %d,00\n", note, denominations[i]);
        N %= denominations[i];
    }

    return 0;

}