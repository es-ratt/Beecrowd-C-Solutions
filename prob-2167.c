#include<stdio.h>
int main(){
    int arr[50], num;
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i < num; i++){
        if(arr[i] < arr[i-1]){
            printf("%d", i + 1);
            return 0;
        }
    }

    printf("\n");
    return 0;
}