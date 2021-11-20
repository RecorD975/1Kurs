/*
Задача Sif_m_log5: Соревнования
На соревнованиях по бегу такие правила:

мальчики до 10 лет не участвуют в соревнованиях (бегут 0 км);
мальчики с 10 до 12 лет (включительно) бегут 3 км;
мальчики с 13 до 15 лет (включительно) бегут 5 км;
остальные участники бегут 10 км.
Участнику соревнований z лет.

Написать программу, которая печатает km - сколько км. побежит участник.

Формат входных данных
Возраст участника z

Формат результата
Число km - длина дистанции
*/
#include <stdio.h>

int main() {
	int z, km;
	scanf("%d", &z);
	if(z < 10)
		km = 0;
	else if(z >= 10 && z <= 12)
		km = 3;
	else if(z >= 13 && z <= 15)
		km = 5;
	else
		km = 10;
	printf("%d\n", km);
	return 0;
}