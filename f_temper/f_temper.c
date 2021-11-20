/*
Температура
Написать функцию , которая переводит температуру по Фаренгейту, в температуру по Цельсию. Измерения - в целых числах. Формула для перевода: Градусы по Цельсию = (градусы по Фаренгейту - 32) / 1.8

 float temFC(int faren);
,
Для отладки использовать функцию main() и написанную функцию float temFC(int faren).

Для проверки отправлять только функцию!!!
*/
#define AAA
#ifdef AAA
#include <stdio.h>
#endif

float temFC(int faren)
{   
    float k; 
    k = (faren-32)/1.8;
    return k;
}

#ifdef AAA
int main() {
    int faren;
    scanf("%d", &faren);
    printf("%.04f\n", temFC(faren));
    return 0;
}
#endif