#include<stdio.h>
#include<string.h>
int main(){
    char num1[1000], num2[1000], num3[1000];
    fgets(num1, 1000, stdin);
    fgets(num2, 1000, stdin);
    fgets(num3, 1000, stdin);

    num1[strcspn(num1, "\n")] = 0;
    num2[strcspn(num2, "\n")] = 0;
    num3[strcspn(num3, "\n")] = 0;

    if (strcmp(num1, "vertebrado") == 0){
        if(strcmp(num2, "ave") == 0){
            if(strcmp(num3,"carnivoro") == 0){
                printf("aguia\n");
            } else if(strcmp(num3, "onivoro") == 0){
                printf("pomba\n");
            } 
        }else if(strcmp(num2, "mamifero") == 0){
                if(strcmp(num3, "onivoro") == 0){
                    printf("homem\n");
                } else if(strcmp(num3, "herbivoro") == 0){
                    printf("vaca\n");
                }
        }
    }

    else if(strcmp(num1, "invertebrado") == 0){
        if(strcmp(num2, "inseto") == 0){
            if(strcmp(num3,"hematofago") == 0){
                printf("pulga\n");
            } else if(strcmp(num3, "herbivoro") == 0){
                printf("lagarta\n");
            } 
        }else if(strcmp(num2, "anelideo") == 0){
                if(strcmp(num3, "hematofago") == 0){
                    printf("sanguessuga\n");
                } else if(strcmp(num3, "onivoro") == 0){
                    printf("minhoca\n");
                }
            }
    }

    return 0;
}