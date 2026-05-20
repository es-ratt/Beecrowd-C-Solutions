#include<stdio.h>
int main(){
    int d, m, y;
    scanf("%d/%d/%d", &d, &m, &y);

    printf("%02d/%02d/%02d\n", m, d, y);
    printf("%02d/%02d/%02d\n", y, m, d);
    printf("%02d-%02d-%02d\n", d, m, y);

    return 0;
}

// #include <stdio.h>

// int main()
// {

//     int date, month, year;
//     scanf("%d/%d/%d", &date, &month, &year);
    
//     printf("%d/%d/%d\n", month, date, year);
//     printf("%d/%d/%d\n", year, month, date);
//     printf("%d-%d-%d\n", date, month, year);

//     return 0;
// }