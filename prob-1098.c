#include<stdio.h>
int main(){
    float I, J;
    for(I = 0; I <= 2.001; I += 0.2){
        for(J = 1; J <= 3; J++){
            if((int)(I * 10) % 10  == 0){
                printf("I=%d J=%d\n", (int)I, (int)(J+I));
            }
            else{
                printf("I=%.1f J=%.1f\n", I, J+I);
            }
        }
    }
    return 0;
}

