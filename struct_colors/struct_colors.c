/*
Цвета
Для описания цветов при отображении на мониторе существуют разные форматы.

Один из форматов RGB: все цвета получаются смешением красного, синего и зеленого различной интенстивности. Интенсивность можно описать структурой:
*/
//#define AAA
#ifdef AAA
#include <stdio.h>

typedef struct
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
}Color;
/*
Эти же цвета используются в "HTML"-формате. В этом случае цвет представляется шестизначным шестнадцатеричными числами, записанными в символьном виде. Старшие разряды соответствуют числу "red" RGB-формата, следующие два - "green", младшие - "blue". Число записывается в переменные типа

unsigned long long
Например, если в формате Color
red = 255; green = 128; blue = 22;
, то в HTML-формате будет записано
FF8016
Требуется написать функции:
*/
// считать RGB-формат с консоли
Color getColor();
// перевод из RGB-формата в число
unsigned long long convertToHTML(Color);
// преобразование числа цвета в RGB-формат
Color convertToRGB(unsigned long long a);
// печать цвета в RGB-формате (печать значений в десятичном виде через пробел)
// red green blue: 
// 255 128 222
// Печатать только числа!!
void printRGB(Color);

// печать цвета в HTML-формате. 
// Примеры: FFA902 0AA3FF
void printHTML(Color);
/*
Отправлять только функции.

Функции будут проверяться так:
*/
int main(){
	Color z, z2;
	unsigned long long html;
	z = getColor();
	printRGB(z);
	html = convertToHTML(z);
	printf("%llu\n", html);
	printHTML(z);
	z2 = convertToRGB(html);
	printRGB(z2);
	return 0;
}
#endif

Color getColor() {
	Color res;
	scanf("%hhd %hhd %hhd", &res.red, &res.green, &res.blue);
	return res;
}

unsigned long long convertToHTML(Color input) {
	unsigned long long res;
	res = input.red * 16 * 16 * 16 * 16 + input.green * 16 * 16 + input.blue; 
	return res;
}

Color convertToRGB(unsigned long long A) {
	Color res;
	res.blue = A % (16 * 16);
	res.green = A / (16 * 16) % (16 * 16);
	res.red = A / (16 * 16 * 16 * 16);
	return res;
}

void printRGB(Color input) {
	printf("%d %d %d\n", input.red, input.green, input.blue);
}

void printHTML(Color input) {
	printf("%02X%02X%02X\n", input.red, input.green, input.blue);
}