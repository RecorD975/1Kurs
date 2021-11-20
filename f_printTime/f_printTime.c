/*
Местное время
Московское время hMos часов, разница по времени с городом N h часов. Если h < 0, город N находится восточнее Москвы, если наоборот - западнее.

Самолет вылетает из Москвы в hMos часов 5 числа некоторого месяца и летит hplane часов.

Необходимо узнать во сколько прилетает самолет в гоорд N по местному времени.

Написать функцию

  void printLocalTime(int hMos, int h, int hplane);
,
которая получает: Московское время (hMos), разницу во времени с городом N(h), время полета(hplane) и печатает местное время и дату прилета самолета (только число месяца) в город N.

В Москве и в городе N 24-часовой отсчет времени.

Для отладки использовать функцию main() и написанную функцию printLocalTime().

Для проверки отправлять только функцию!!! Не использовать конструкцию if, циклы, массивы, рекурсию...!!!
*/
#define AAA
#ifdef AAA
#include <stdio.h>
#endif

void printLocalTime(int hMos, int h, int hplane)
{
    int hours, day, currentday = 5;
    hours = (24 + hMos - h + hplane) % 24;
    day = currentday - 1 + (24 + (hMos - h + hplane)) / 24;
    printf ("%d %d\n", hours, day);
}

#ifdef AAA
int main() {
    int hMos, h, hplane;
    scanf("%d %d %d", &hMos, &h, &hplane);
    printLocalTime(hMos, h, hplane);
    return 0;
}
#endif