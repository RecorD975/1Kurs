//Канонический вид
//Дана структура, описывающая прямоугольник со сторонами, параллельными осям координат. Левая верхняя точка должна быть левее и выше правой нижней. Если это не так, функция normalize должна изменить значения полей так, чтобы этот прямоугольник был задан корректно.
#define AAA
#ifdef AAA
#include <stdio.h>
//Структуры уже определены в программе:
struct Point {
	int x;
	int y;
};

struct Rect {
	struct Point lt; // левая верхняя вершина
	struct Point rb; // правая нижняя вершина
};

void normalize(struct Rect * p);
//Объявление структур и функцию main посылать НЕ нужно.

//Для тестирования можете использовать такую функцию main:

int main() {
	struct Rect a;
	scanf("%d %d %d %d", &(a.lt.x), &(a.lt.y), &(a.rb.x), &(a.rb.y));
	normalize(&a);
	printf("%d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y);
	return 0;
}
//Формат входных данных
//ltx lty rbx rby - 4 целых числа через пробел

//Формат результата
//ltx lty rbx rby - 4 целых числа через пробел, прямоугольник с правильно заданными вершинами.
#endif

void normalize(struct Rect * p) {
	int A, B, C;
	if (p->lt.x > p->rb.x) {
		A = p->rb.x;
		p->rb.x = p->lt.x;
		p->lt.x = A;
	};
	if (p->lt.y < p->rb.y) {
		B = p->rb.y;
		p->rb.y = p->lt.y;
		p->lt.y = B;
	};
}