#include<stdio.h>
int main(){
    int m,n;
    int freq[20001];
    int count;

    while(1){
    scanf("%d %d", &m, &n);
    if(m == 0 && n ==0){
        break;
       }

    count = 0;

    for(int i = 1; i <= m; i++){
        freq[i] = 0;
    }

    for(int i = 0; i < n; i++){
        int ticket;
        scanf("%d", &ticket);
        freq[ticket]++;
    }

    for(int i = 1; i <= m; i++){
        if(freq[i] > 1){
            count++;
        }
      }

    printf("%d\n", count);
    }
    return 0;
}