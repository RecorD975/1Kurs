/*
Кошелек - вычитание
У магов свои деньги. В магической Великобритании это кнаты (knut), сикли (sickle) и галеоны (galleon)

1 галеон = 17 сиклей
1 сикль = 29 кнатов

Сначала в кошельке было g1 галеонов s1 сиклей и k1 кнатов.
После покупок в нем стало g2 галеонов s2 сиклей и k2 кнатов.
Сколько денег было потрачено на покупки?
Представьте эту сумму, используя минимальное количество монет.

Автор: Дербышева Т. Н.
Входные данные

Через пробел g1 s1 k1 на одной строке.
Через пробел g2 s2 k2 на следующей строке.
Сначала и после покупок галеонов не больше 5000, сиклей и кнатов не больше 10000.

Выходные данные

Через пробел вычисленное количество галеонов, сиклей и кнатов.
*/
#include <stdio.h>

int main() {
	int g, s, k, g1, s1, k1, g2, s2, k2, gk, sk, gk1, sk1, gk2, sk2;
	scanf("%d %d %d\n%d %d %d", &g, &s, &k, &g1, &s1, &k1);
    gk = 17 * 29 * g;
    sk = 29 * s;
    gk1 = 17 * 29 * g1;
    sk1 = 29 * s1;
    gk2 = (gk + sk + k - (gk1 + sk1 + k1));
    g2 = gk2 / (17 * 29);
    s2 = (gk2 - g2 * 17 * 29) / 29;
    k2 = gk2 - g2 * 17 * 29 - s2 * 29;
    printf("%d %d %d\n", g2, s2, k2);
	return 0;
}
