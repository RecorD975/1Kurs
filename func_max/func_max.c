/*
max
Напишите функцию int max(int a, int b), которая возвращает максимальное из двух чисел.

Функцию main реализовывать НЕ нужно.

Проверку корректности аргументов можно не делать.
*/
#define AAA
#ifdef AAA
#include <stdio.h>

int max(int a, int b);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", max(a, b));
    return 0;
}
#endif

int max(int a, int b) {
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}