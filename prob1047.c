#include<stdio.h>
int main(){
    int startHour, startMin, endHour, endMin;
    int start, end, duration, hours, minutes;
    
    scanf("%d %d %d %d", &startHour, &startMin, &endHour, &endMin);

    start = startHour * 60 + startMin;
    end = endHour * 60 + endMin;

    if(start < end){
        duration = end - start;
    } else{
        duration = ((24 * 60) - start) + end;
    }

    hours = duration / 60;
    minutes = duration % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

    return 0;
}