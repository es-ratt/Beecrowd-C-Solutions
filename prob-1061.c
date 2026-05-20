#include<stdio.h>
int main(){
    int d1, d2;
    int h1, m1, s1;
    int h2, m2, s2;

    scanf("Dia %d", &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);

    scanf(" Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    int start = d1 * 86400 + h1 * 3600 + m1 * 60 + s1;
    int end = d2 * 86400 + h2 * 3600 + m2 * 60 + s2;

    int duration =end - start;

    int day = duration / 86400;
    duration %= 86400;

    int hours = duration / 3600;
    duration %= 3600;

    int minutes = duration / 60;
    int seconds = duration % 60;

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}

