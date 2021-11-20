//Struct Rect - 5
//Дана структура, описывающая прямоугольник со сторонами, параллельными осям координат. Реализуйте функцию, max, возвращающую больший по площади прямоугольник. Если два прямоугольника имеют равные площади, возвратите любой из них.
#define AAA
#ifdef AAA
#include <stdio.h>

struct Rect * max(struct Rect * pa, struct Rect * pb);
int areaRect1 (struct Rect r1);
//Структуры уже определены в программе:
struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt; // левая верхняя вершина
    struct Point rb; // правая нижняя вершина
};
//Объявление структур и функцию main посылать НЕ нужно.
int main() {
    struct Rect first, second;
    scanf("%d %d %d %d", &first.lt.x, &first.lt.y, &first.rb.x, &first.rb.y);
    scanf("%d %d %d %d", &second.lt.x, &second.lt.y, &second.rb.x, &second.rb.y);
    printf("%d\n%d\n", areaRect1(first), areaRect1(second));
    printf("%d\n", areaRect1(*max(&first, &second)));
    return 0;
}
#endif

int areaRect1 (struct Rect r1 ) {
	int S, Width, Length;
	Width = r1.lt.y - r1.rb.y;
	Length = r1.rb.x - r1.lt.x;
	S = Width * Length;
	return S;
};

struct Rect * max(struct Rect * pa, struct Rect * pb) {
    if(areaRect1(*pa) > areaRect1(*pb))
        return pa;
    else
        return pb;
};