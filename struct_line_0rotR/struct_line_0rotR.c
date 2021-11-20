/*
Задача struct_line_0rotR: Поворот
Написать функцию void rotRLine(struct Line * t), которая поворачивает отрезок на 90 градусов по часовой стрелке вокруг точки (0,0).
Напечатайте полученный отрезок и его длину.
*/
//#define AAA
#ifdef AAA
#include <stdio.h>
#include <math.h>
struct Point {
    int x;
    int y;
};
struct Line {
    struct Point a; // начало отрезка
    struct Point b; // конец отрезка
    float len;      // длина отрезка
};
float distance(struct Point a, struct Point b);
void scanLine(struct Line * t);
void printLine(struct Line t);
void rotRLine(struct Line * t);

int main() {
    struct Line t;
    scanLine(&t);
    rotRLine(&t);
    printLine(t);
    printf ("%.2f\n", distance(t.a, t.b));
    return 0;
}
#endif
/*
Формат входных данных
4 целых числа через пробел - x, y координаты точки - целые числа через пробел.

Формат результата
x y координаты концов отрезка и его длина
*/

float distance(struct Point a, struct Point b) {
	float k = sqrt((a.x - b.x) * (a.x - b.x) + (b.y - a.y) * (b.y - a.y));
	return k;
}
void scanLine(struct Line * t) {
	scanf("%d%d%d%d", &t->a.x, &t->a.y, &t->b.x, &t->b.y);
}
void printLine(struct Line t) {
	printf ("%d %d %d %d ", t.a.x, t.a.y, t.b.x, t.b.y);
}
void rotRLine(struct Line * t) {
    int res, ras;
    res = t->a.y;
    ras = t->b.y;
    t->a.y = -t->a.x;
    t->a.x = res;
    t->b.y = -t->b.x;
    t->b.x = ras;
}
