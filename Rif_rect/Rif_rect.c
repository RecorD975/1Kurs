/*
Принадлежность области - прямоугольник; Area - rectangle
По данным x и y координатам точки напечатайте - принадлежит точка к указанной области (включая границы) или нет.

Входные данные

Два числа с плавающей точкой через пробел - x и y координаты точки

Выходные данные

YES, если точка принадлежит области вместе с границей, NO - если не принадлежит
*/
#include <stdio.h>

int main() {
	float x, y;
	scanf("%f%f", &x, &y);
	if(x <= 2 && x >= -3 && y <= 6 && y >= -4)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}