/*
Задача funcp_rotateC: Поворот
Прямоугольник со сторонами, параллельными осям, задан координатами двух точек - левой верхней и правой нижней.

Написать и использовать функцию void rotateC(int * x1, int * y1, int * x2, int * y2), которая поворачивает прямоугольник вокруг его центра (пересечения диагоналей).

Гарантируется, что тесты будут оставлять прямоугольник после поворота в целых координатах. Ничего округлять не нужно.

Формат входных данных
4 целых числа через пробел - x и y координаты левой верхней и правой нижней точки исходного прямоугольника.

Формат результата
4 целых числа через пробел - x и y координаты левой верхней и правой нижней точки после поворота.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void rotateC(int * x1, int * y1, int * x2, int * y2) {
	int length, width, ras;
	length = *x2 - *x1;
	width = *y1 - *y2;
	ras = (length - width) / 2;
	*x1 = *x1 + ras;
	*y1 = *y1 + ras;
	*x2 = *x2 - ras;
	*y2 = *y2 - ras;
}
int main() {
	int x1, y1, x2, y2;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	rotateC(&x1, &y1, &x2, &y2);
	printf("%d %d %d %d\n", x1, y1, x2, y2);
	return 0;
}