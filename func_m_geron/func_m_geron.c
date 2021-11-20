/*
Функция
Можно вычислить площадь треугольника s по трем его сторонам.

Напишите и проверьте функции:

float length(int x1, int y1, int x2, int y2);
, которая вычисляет расстояние между 2 точками.
Длина не может быть отрицательной.

c2 = (x1-x2)2 + (y1-y2)2

float s3(int x1, int y1, int x2, int y2, int x3, int y3);
, которая вычисляет площадь треугольника по 3 точкам по формуле Герона
Входные данные

Координаты 3 точек x1 y1 x2 y2 x3 y3

Выходные данные

Площадь треугольника
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

float length(int x1, int y1, int x2, int y2) {
    float res;
    res = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return res;
}

float s3(int x1, int y1, int x2, int y2, int x3, int y3) {
    float S, p;
    p = (length(x1, y1, x2, y2) + length(x1, y1, x3, y3) + length(x2, y2, x3, y3)) / 2;
    S = sqrt(p * (p - length(x1, y1, x2, y2)) * (p - length(x1, y1, x3, y3)) * (p - length(x2, y2, x3, y3)));
    return S;
}

int main () 
{
    int  x1, y1, x2, y2, x3, y3;
    scanf ("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("%.01f\n", s3(x1, y1, x2, y2, x3, y3));
    return 0;
}