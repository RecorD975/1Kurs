/*
Struct Rect - 2
Стороны прямоугольника параллельны осям координат.
Для описания этого прямоугольника можно использовать различные структуры:
Прямоугольник задается координатами левого верхнего угла, а также его шириной и высотой.
struct Rect0 {
	int x;        // верхняя левая вершина, х-координата
	int y;        // верхняя левая вершина, y-координата
	int width;    // ширина
	int height;   // высота
};
Другой способ: прямоугольник задается координатами левой верхней вершины и правой нижней.
struct Point {
	int x;
	int y;
};
struct Rect1 {
	struct Point lt; // левая верхняя вершина
	struct Point rb; // правая нижняя вершина
};
Написать две функции для вычисления площади прямоугольника: функция
int areaRect0 (struct Rect0);
использует первую структуру, а функция
int areaRect1 (struct Rect1)
- другую
Структуры уже определены в программе:
Объявление структур и функцию main посылать НЕ нужно.
*/
#define AAA
#ifdef AAA
#include <stdio.h>

struct Rect0 {
	int x;        // верхняя левая вершина, х-координата
	int y;        // верхняя левая вершина, y-координата
	int width;    // ширина
	int height;   // высота
};
struct Point {
	int x;
	int y;
};
struct Rect1 {
	struct Point lt; // левая верхняя вершина
	struct Point rb; // правая нижняя вершина
};
#endif

int areaRect0 (struct Rect0 r0 ) {
	int S;
	S = r0.width * r0.height;
	return S;
};

int areaRect1 (struct Rect1 r1 ) {
	int S, Width, Length;
	Width = r1.lt.y - r1.rb.y;
	Length = r1.rb.x - r1.lt.x;
	S = Width * Length;
	return S;
};

#ifdef AAA
int main() {
	struct Rect0 ZeroRect;
	struct Rect1 FirstRect;
	scanf("%d %d %d %d", &ZeroRect.x, &ZeroRect.y, &ZeroRect.width, &ZeroRect.height);
	FirstRect.lt.x = ZeroRect.x;
	FirstRect.lt.y = ZeroRect.y;
	FirstRect.rb.x = ZeroRect.x + ZeroRect.width;
	FirstRect.rb.y = ZeroRect.y - ZeroRect.height;
	printf("%d %d %d %d\n", ZeroRect.x, ZeroRect.y, ZeroRect.width, ZeroRect.height);
	printf("%d %d %d %d\n", FirstRect.lt.x, FirstRect.lt.y, FirstRect.rb.x, FirstRect.rb.y);
	printf("%d %d %d %d\n", ZeroRect.x, ZeroRect.y, ZeroRect.width, ZeroRect.height);
	printf("%d\n%d\n", areaRect0(ZeroRect), areaRect1(FirstRect));
	return 0;
}
#endif