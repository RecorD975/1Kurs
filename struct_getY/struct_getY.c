/*
Задача struct_getY: Проекция
Написать функцию int toY(struct Point a), которая отображает точку на ось Y и возвращает y координату полученной проекции.
С помощью функции решить задачу.
struct Point {
	int x;
	int y;
};
Проверяющей системе отправлять программу

Формат входных данных
x, y координаты точки - целые числа через пробел.

Формат результата
у координата проекции точки на ось Y.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Point {
	int x;
	int y;
}Point;

int toY(Point a) {
	return a.y;
}

int main() {
	Point a;
	int x, y, b;
	scanf("%d%d", &x, &y);
	a.x = x;
	a.y = y;
	b = toY(a);
	printf("%d\n", b);
	return 0;
}