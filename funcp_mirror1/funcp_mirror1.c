/*
Задача funcp_mirror1_c: Отобразить точку
Написать и использовать функцию void mirror(int * x1, int * y1), которая отображает точку с координатами x,y относительно оси Y.

Формат входных данных
2 целых числа через пробел - x и y координаты точки до отображения.

Формат результата
2 целых числа через пробел - x и y координаты точки после отображения.
*/
#include <stdio.h>

void mirror(int * x1, int * y1) {
	*x1 = -*x1;
}
int main() {
	int x1, y1;
	scanf("%d%d", &x1, &y1);
	mirror(&x1, &y1);
	printf("%d %d\n", x1, y1);
	return 0;
}