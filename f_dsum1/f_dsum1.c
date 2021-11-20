/*
Сумма четных и нечетных цифр
Дано восьмизначное десятичное число.

Написать функцию

  void printOddEvent(unsigned int number);
,
которая делит это число на 2 и печатает сумму цифр, стоящих на четных местах этого числа, а через пробел - сумму цифр, стоящих на нечетных местах этого числа. Цифра с номером 1 - самый младший разряд числа.

Для отладки использовать функцию main().

Для проверки отправлять только функцию!!!
*/
#define AAA
#ifdef AAA
#include <stdio.h>
#endif

void printOddEvent(unsigned int number)
{
	int n, N, numberdiff;
	numberdiff = number / 2;
	n = numberdiff / 10000000 + numberdiff / 100000 % 10 + numberdiff / 1000 % 10 + numberdiff / 10 % 10;
	N = numberdiff / 1000000 % 10 + numberdiff / 10000 % 10 + numberdiff / 100 % 10 + numberdiff % 10;
	printf ("%d %d\n", N, n);
}

#ifdef AAA
int main() {
	int number;
	scanf("%d", &number);
	printOddEvent(number);
	return 0;
}
#endif