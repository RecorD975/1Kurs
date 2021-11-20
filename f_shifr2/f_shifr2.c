/*
Шифр (2)
Слово из четырех заглавных латинских букв необходимо зашфровать 8-значным целым числом. Каждая латинская буква кодируется двумя десятичными цифрами этого числа.

Код букв соответствует положению буквы в латинском алфавите.

Написать функцию

unsigned int codeToNumber(char l1, char l2, char l3, char l4);
, которая кодирует слово из 4-х заглавных латиских букв в 8-разрядное число.

Функция будет использоваться в программе:


#include <stdio.h>
unsigned int codeToNumber(char l1, char l2, char l3, char l4);
int main(){
	char l1, l2, l3 ,l4;
	unsigned long long number; 
	scanf("%c%c%c%c", &l1, &l2, &l3, &l4 );
	printf("%08u\n", codeToNumber(l1, l2, l3, l4));
}
Конструкции if, циклы, массивы, рекурсию не использовать!!! После написания и проверки программы с функцией, проверяющей системе отправлять только функцию!!!

Выходные данные. Одно целое восьмизначное число - закодированное слово.
*/
#define AAA
#ifdef AAA
#include <stdio.h>
#endif

unsigned int codeToNumber(char l1, char l2, char l3, char l4) {
	int res;
	l1 = l1 - 'A' + 1;
	l2 = l2 - 'A' + 1;
	l3 = l3 - 'A' + 1;
	l4 = l4 - 'A' + 1;
	res = l1*1000000 + l2*10000 + l3*100 + l4;
	return res;
}

#ifdef AAA
int main() {
	char l1, l2, l3, l4;
	scanf("%c%c%c%c", &l1, &l2, &l3, &l4);
	printf("%08d\n", codeToNumber(l1, l2, l3, l4));
	return 0;
}
#endif