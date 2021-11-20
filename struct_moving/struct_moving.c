/*
Равноускоренное движение
Материальная точка массой 0 ≤ m ≤ 10 движется равноускоренно по прямой, параллельной оси ОХ

Координата точки -10000 ≤ S ≤ 10000, начальная скорость точки в каждый момент времени (изменяется в зависимостит от времени) -100 ≤ v0(t) ≤ 100, ускорение -100 ≤ a ≤ 100 в начальный момент времени (time = 0).

Если в момент времени t0 = 0 скорость точки v0 = 0, ускорение a = 1, то в момент времени t = 1, скорость v0 = 1.

Состояние точки в каждый момент времени можно описать структурой:
*/
//#define AAA
#ifdef AAA
typedef struct
{
	float coord; // начальная координата точки
	float v0; // начальная скорость точки
	float a;  // ускорение точки
	float m; // масса точки
}MassPoint;
/*Через время 0 ≤ time ≤ 100 точка поменяет свою координату на прямой.

Требуется написать функции:
*/
// получает параметры точки с консоли (три дробных числа, записанных через пробел)
MassPoint getParam();

// вычисляет новые значения параметров точки в момент времени time 
// и возвращает новую координату точки
float move(MassPoint * m, int time);

// возвращает координату точки m2 относительно m1 и изменяет значения параметров точек
// точки не сталкиваются. Они "проплывают" мимо друг друга 
float pointByPoint(MassPoint *m1, MassPoint *m2, int time);

// печать параметров точки с точностью до 2 знаков после запятой в формате
// масса,координта,скорость,ускорение (через запятую без пробелов) c переносом строки 
// пример: 0.10,25.20,-15.5,0.30
void printM(MassPoint a);
//Отправлять только функции.
#include <stdio.h>
#include <math.h>

int main() {
    MassPoint A = getParam();
    MassPoint B = getParam();
    int time;
    scanf("%d", &time);
    printM(A);
    printM(B);
    printf("%.02f\n", pointByPoint(&A, &B, time));
    printM(A);
    printM(B);
    return 0;
}
#endif

MassPoint getParam() {
    MassPoint res;
    scanf("%f %f %f %f", &res.m, &res.coord, &res.v0, &res.a);
    return res;
}

float move(MassPoint * object, int time) {
    object->coord = object->coord + object->v0 * time + object->a * time * time / 2;
    object->v0 = object->v0 + object->a * time;
    return object->coord;
}

float pointByPoint(MassPoint *m1, MassPoint *m2, int time) {
    float first = move(m1, time);
    float second = move(m2, time);
    return second - first;
}

void printM(MassPoint obj) {
    printf("%.02f,%.02f,%.02f,%.02f\n", obj.m, obj.coord, obj.v0, obj.a);
}