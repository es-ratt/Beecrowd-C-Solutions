#include<stdio.h>
int main(){
    int n;
    int first = 1;

    while(scanf("%d", &n) && n != 0){
        if(!first){
            printf("\n");
        }

        int matrix [n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int min = i;
                if(j < min) min = j;
                if(n - i - 1 < min) min = n - i - 1;
                if(n - j - 1 < min) min = n - j - 1;
                matrix [i][j] = min + 1;
            }
        }

        for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(j == 0){
                        printf("%3d", matrix[i][j]);
                    }
                    else{
                        printf(" %3d", matrix[i][j]);
                    }
                }
                printf("\n");
            }
        }
        return 0;
    }