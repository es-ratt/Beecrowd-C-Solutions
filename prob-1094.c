#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int total = 0;
    int frogs = 0;
    int rats = 0;
    int rabbits = 0;

    for(int i = 0; i < n; i++){
        int amount;
        char type;
        scanf("%d %c", &amount, &type);

        total += amount;

        if(type == 'S'){
            frogs += amount;
        }
        else if(type == 'R'){
            rats += amount;
        }
        else if(type == 'C'){
            rabbits += amount;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbits);
    printf("Total de ratos: %d\n", rats);
    printf("Total de sapos: %d\n", frogs);

    printf("Percentual de coelhos: %.2f %%\n", (rabbits * 100.00) / total);
    printf("Percentual de ratos: %.2f %%\n", (rats * 100.00) / total);
    printf("Percentual de sapos: %.2f %%\n", (frogs * 100.00) / total);

    return 0;
}