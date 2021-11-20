/*
Задача funcp_mirror2_c: Отобразить прямоугольник
Написать и использовать функцию void mirror(int * x1, int * y1, int * x2, int * y2), которая отображает отрезок относительно оси X.

Формат входных данных
4 целых числа через пробел - x и y координаты концов отрезка до отображения.

Формат результата
4 целых числа через пробел - x и y координаты концов отрезка после отображения.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mirror(int * x1, int * y1, int * x2, int * y2) {
	*y1 = -*y1;
	*y2 = -*y2;
}

int main() {
	int x1, y1, x2, y2;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	mirror(&x1, &y1, &x2, &y2);
	printf("%d %d %d %d\n", x1, y1, x2, y2);
	return 0;
}