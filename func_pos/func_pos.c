/*
positive
Напишите функцию unsigned int positive(int x), которая возвращает модуль целого числа х.

Функцию abs() не использовать!!

Функцию main реализовывать НЕ нужно.

Проверку корректности аргументов можно не делать.
*/
#define AAA
#ifdef AAA
#include <stdio.h>
unsigned int positive(int x);

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", positive(x));
    return 0;
}
#endif

unsigned int positive(int x) {
    if(x >= 0)
        return x;
    else
        return -x;
}