/*
Стулья у другой стены
Площадь комнаты - s. Длина одной стороны w. Ширина стула ch. Вычислить сколько стульев res можно поставить у ДРУГОЙ стороны комнаты.

Автор: Овсянникова Т.В.
Формат входных данных
s, w, ch - дробные положительные числа

Формат результата
res - целое число
*/
#include <stdio.h>

int main() {
	float s, w, ch;
	int res;
	scanf("%f %f %f", &s, &w, &ch);
	res = (s / w) / ch;
	printf("%d\n", res);
	return 0;
}