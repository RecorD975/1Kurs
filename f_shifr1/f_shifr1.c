/*
Шифр
Слово из четырех заглавных латинских букв зашфровано 8-значным целым числом. Каждая латинская буква кодируется двумя десятичными цифрами этого числа.

Код букв соответствует положению буквы в латинском алфавите.

Написать функцию

void deCode(unsigned int kodeNumber, char *l1, char *l2, char *l3, char *l4);
, где kodeNumber - код слова в виде числа, *l1, *l2, *l3, *l4 - адреса переменных для записаи соответствующих букв.

Конструкции if, циклы, массивы, рекурсию не использовать!!! После написания и проверки программы с функцией, проверяющей системе отправлять только функцию!!!
*/
#define AAA
#ifdef AAA
#include <stdio.h>
#endif

void deCode(unsigned int kodeNumber, char *l1, char *l2, char *l3, char *l4) {
	*l1 = kodeNumber / 1000000 - 1 + 'A';
	*l2 = kodeNumber / 10000 % 100 - 1 + 'A';
	*l3 = kodeNumber % 10000 / 100 - 1 + 'A';
	*l4 = kodeNumber % 100 - 1 + 'A';
}

#ifdef AAA
int main() {
	char l1, l2, l3, l4;
	unsigned int kodeNumber;
	scanf("%d", &kodeNumber);
	deCode(kodeNumber, &l1, &l2, &l3, &l4);
	printf("%c%c%c%c\n", l1, l2, l3, l4);
	return 0;
}
#endif