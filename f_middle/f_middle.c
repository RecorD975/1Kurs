/*
Задача f_middle: Новый центр отрезка
Отрезок на прямой 0X задан своими координатами (int).
Написать и использовать функцию void toMiddle(int * x1, int * x2, int middle), которая перемещает отрезок так, чтобы его центр оказался в точке middle.

Округление новых координат производить по математическим правилам округления.

Посылать нужно только функцию.

Формат входных данных
3 числа через пробел - координаты начала, конца исходного отрезка и точки middle.

Формат результата
2 числа через пробел - координаты начала и конца отрезка после перемещения.
*/
#define AAA
#ifdef AAA
#include <stdio.h>
#endif

void toMiddle(int *x1, int *x2, int middle)
{
    float res;
    res = ((*x1 + *x2) / 2);
    if (res < 0)
    {
        *x1 = *x1 - res + 1 + middle;
        *x2 = *x2 - res + 1 + middle;
    }
    if (res > 0)
    {
        *x1 = *x1 - res + middle;
        *x2 = *x2 - res + middle;
    }
}

#ifdef AAA
int main() {
    int x1, x2, middle;
    scanf("%d %d %d", &x1, &x2, &middle);
    toMiddle(&x1, &x2, middle);
    printf("%d %d\n", x1, x2);
    return 0;
}
#endif