#include<stdio.h>
int main(){
    int suspect[1000], num;


    while(1){
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        
    for(int i = 0; i < num; i++){
    scanf("%d", &suspect[i]);
    }

    int max = -1, secondMax = -1;
    int second_index = -1;

    for(int i = 0; i < num; i++){
        if(suspect[i] > max){
            max = suspect[i];
        } 
    }

    for(int i = 0; i< num; i++){
        if(suspect[i] > secondMax && suspect[i] < max){
            secondMax = suspect[i];
            second_index = i+1;
        }
    }

    printf("%d\n", second_index);

    }
    return 0;
}