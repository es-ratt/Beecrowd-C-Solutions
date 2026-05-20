#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int nums[20001] = {0};
    for (int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        nums[x]++;
    }

    for(int i = 0; i< 20001; i++){
        if(nums[i] > 0){
            printf("%d aparece %d vez(es)\n", i, nums[i]);
        }
    }
    return 0;
}