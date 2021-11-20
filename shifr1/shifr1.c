/*
Шифр
Слово из четырех заглавных латинских букв зашфровано 8-значным целым числом. Каждая латинская буква кодируется двумя десятичными цифрами этого числа.

Код букв соответствует положению буквы в латинском алфавите.

Для отображения закодированных букв на экран можно воспользоваться следующим приемом:

#include <stdio.h>

int main() {
    unsigned char number;
    scanf("%hhu", &number);
    //Печатаем букву с номером number от первой 'A' 
    printf("%c\n", number - 1 + 'A');
}
Требуется написать программу, которая раскодирует это слово.

Входные данные. Одно целое 8-значное число

Выходные данные. Четыре заглавные латинские буквы, записанные без разделителей между ними.
*/
#include <stdio.h> 

int main() {  
    unsigned int a, b, c, d, f;
    scanf("%d", &f);
    a = f / 1000000;
    b = f / 10000 - a * 100;
    d = f % 100;
    c = f % 10000 / 100;
    printf("%c%c%c%c\n", a - 1 + 'A', b - 1 + 'A', c - 1 + 'A', d - 1 + 'A');
    return 0;
}