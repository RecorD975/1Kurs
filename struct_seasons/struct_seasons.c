//Времена года
//Дата описывается структурой:
//#define AAA
#ifdef AAA
#include <stdio.h>

typedef struct
{
	int yy; // год
	char mm; // месяц
	char dd; // день
}Data;
//Зима начинается с 1 декабря и длится до последнего дня февраля, весна начинается с 1 марта и длится до последнего дня (31) мая, лето начинается с 1 июня и длится до 31 августа, осень начинается с 1 сентября и длится до 30 ноября

//Времена года описываются структурой

typedef struct
{
	int yy; // год
	char season; // время года (зима - 0, весна - 1, лето - 2, осень - 3)
	int day; // день от начала текущего времени года
}Season;
//Требуется написать следующие функции:

// получает параметры даты с консоли (три целых числа через тире:
// YYYY-MM-DD)
// Например, 2020-12-13
Data getData();

// Печатает дату в формате: YYYY-MM-DD завершая переносом строки (\n)
void printData(Data);

// конвертирует дату в формат Season и возвращает это значение
// зима с 1 декабря по конец февраля, весна - с 1 марта по 31 мая, лето - с 1 июня по 31 августа, 
// осень - с 1 сентября по 30 ноября
Season convToSeas(Data);

//  печать времени года в формате: YYYY-SS-DD (SS - номер времени года, 
// DD - день от начала времени года, завершая переносом строки
void printS(Season);

//Проверяющей системе отправлять только функции.
//Функции проверяются так:

int main() {
	Data dat;
    Season seas;
	dat = getData();
	printData(dat);
	seas = convToSeas(dat);
	printS(seas);
	return 0;
}
#endif

Data getData() {
    Data res;
    scanf("%d-%hhd-%hhd", &res.yy, &res.mm, &res.dd);
    return res;
}

void printData(Data input) {
    printf("%04d-%02d-%02d\n", input.yy, input.mm, input.dd);
}

Season convToSeas(Data input) {
    Season res;
    res.yy = input.yy;
    if(input.mm >= 3 && input.mm <= 5) {
        res.season = 1;
    }
    else if(input.mm >= 6 && input.mm <= 8) {
        res.season = 2;
    }
    else if (input.mm >= 9 && input.mm <= 11) {
        res.season = 3;
    }
    else {
        res.season = 0;
    }
    if(input.mm == 3 || input.mm == 6 || input.mm == 9 || input.mm == 12) {
        res.day = input.dd;
    }
    else if(input.mm == 4 || input.mm == 1) {
        res.day = input.dd + 31;
    }
    else if(input.mm == 7 || input.mm == 10) {
        res.day = input.dd + 30;
    }
    else if(input.mm == 5 || input.mm == 8 || input.mm == 11) {
        res.day = input.dd + 31 + 30;
    }
    else if (input.mm == 2) {
        res.day = input.dd + 31 * 2;
    }
    return res;
}

void printS(Season input) {
    printf("%04d-%02d-%02d\n", input.yy, input.season, input.day);
}