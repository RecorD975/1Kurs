/*
Функции для ручных часов
Ручные часы имеют 12-ти часовой циферблат.

Для хранения и представления показаний часов используется структура:
*/
#define AAA
#ifdef AAA
#include <stdio.h>

typedef struct{ 
	int h; // часы 
	int min; // минуты (от 0 до 59)
}TicTac;

//Написать следующие функции для работы с часами:
// получает показание часов a и возвращает показание этих часов 
// через min минут, .
TicTac after(TicTac a, int min);

// "переводит" вперед стрелки этих часов (me) 
// на a.h часов и a.min минут 
void forward(TicTac * me, TicTac a);

// "переводит" назад стрелки этих часов (me) 
// на a.h часов и a.min минут 
void backward(TicTac * me, TicTac a);

// проверяет совпадают ли показания часов a и b
// если совпадают, возвращает 1, если нет - 0
int isEqualTime(TicTac a, TicTac b);

// печатает показания этих часов в формате hh:mm\n
void printTic(TicTac a);

int main() {
	TicTac first, second;
	int minforward;
	scanf("%d:%d %d %d:%d", &first.h, &first.min, &minforward, &second.h, &second.min);
	printf("equal: %d\n", isEqualTime(first, second));
	printf("after: ");
	printTic(after(first, minforward));
	printf("forward: ");
	forward(&first, second);
	printTic(first);
	printf("backward: ");
	backward(&first, second);
	backward(&first, second);
	printTic(first);
	return 0;
}
#endif

TicTac after (TicTac a, int min) {
	int resh, resm;
	resh = ((a.min + min) / 60 + a.h) % 12;
	resm = (a.min + min) % 60;
	if (resh > 12) {
		resh = resh % 12;
	}
	a.h = resh;
	a.min = resm;
	return a;
};

int h2m(TicTac a) {
	return a.h * 60 + a.min;
};

TicTac m2h(int mm) {
	TicTac res;
	res.min = mm % 60;
	res.h = (mm / 60) % 12;
	if (res.min < 0) {
		res.min = 60 + res.min;
		res.h = 11 + res.h;
	}
	return res;
}
void forward (TicTac * me, TicTac a) {
  int mm;
  mm = h2m(*me) + h2m(a);
  * me = m2h(mm);
};

void backward (TicTac * me, TicTac a) {
	int mm;
	mm = h2m(*me) - h2m(a);
	*me = m2h(mm);
};

int isEqualTime(TicTac a, TicTac b) {
	if(a.h == b.h) {
		if(a.min == b.min) {
			return 1;
		}
	}
	return 0;
};

void printTic (TicTac a) { 
	printf("%02d:%02d\n", a.h, a.min);
};