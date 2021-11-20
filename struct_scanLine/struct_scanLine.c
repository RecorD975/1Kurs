/*
Задача struct_scanLine: Получить отрезок
Написать функцию float distance(struct Point a, struct Point b), которая вычисляет расстояние между двумя точками.
Написать функцию void scanLine(struct Line * t), которая считывает координаты начала и конца отрезка и заполняет поля struct Line.
Проверяющей системе отправлять всю программу

Формат входных данных
4 целых числа через пробел - x, y координаты точки - целые числа через пробел.

Формат результата
x y координаты концов отрезка и его длина
*/
#include <stdio.h>
#include <stdlib.h>
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

int main() {
	struct Line t;
	float d;
	scanLine(&t);
	printLine(t);
	d = distance (t.a, t.b);
	printf ("%.2f\n", d);
	return 0;
}