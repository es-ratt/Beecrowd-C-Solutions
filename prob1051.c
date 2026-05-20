#include<stdio.h>
int main(){
    double money, tax = 0.0;
    scanf("%lf", &money);

    if(money <= 2000.00){
        printf("Isento\n");
    }
    else{
        if(money > 4500.00){
            tax += (money - 4500.00) * 0.28;
            money = 4500.00;
        }
        if(money > 3000.00){
            tax += (money - 3000.00) * 0.18;
            money = 3000.00;
        }
        if(money > 2000.00){
            tax += (money - 2000.00) * 0.08;
        }
        printf("R$ %.2lf\n", tax);
    }

    return 0;
}