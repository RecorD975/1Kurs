/*
Расстояние
Отрезок на плоскости задан двумя точками: координаты (x1, y1) и (x2, y2) - целые числа, не превышающие по модулю 1000.

Написать функцию

float getDistance(int x1, int y1, int x2, int y2);
, которая вычисляет расстояние между этими точками с точностью до второго знака после запятой.

Конструкции if, циклы, массивы, рекурсию не использовать!!! При вычислении квадрата числа пользоваться умножением!! После написания и проверки программы с функцией, проверяющей системе отправлять только функцию!!!

При проверке работы программы с математическими функциями необходимо дописать в начало программы:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//...
Компиляция:

gcc myprog.c -o myprog.exe -lm
*/
#define AAA
#ifdef AAA
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#endif

float getDistance(int x1, int y1, int x2, int y2)
{    
    float k = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return k;
}

#ifdef AAA
int main() {
    int x1, x2, y1, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    printf("%.02f\n", getDistance(x1, y1, x2, y2));
    return 0;
}
#endif