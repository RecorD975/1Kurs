/*
Возраст невесты Кащея
Когда Василисе Премудрой исполнилось 18 лет, Кащей Бессмертный решил взять ее замуж. Василиса спросила, сколько у Кащея сундуков с золотом. Кащей сказал, что у него K сундуков полных, и каждый год прибавляется еще по 33 сундука. Василиса обещала выйти за Кащея тогда, когда у него будет N сундуков, полных золота. Сколько полных лет будет невесте Кащея в день свадьбы?

Когда человеку 27 лет и 10 месяцев, то ему 27 полных лет.

Входные данные

K и N - два целых положительных числа, меньших 100000

Выходные данные

Возраст невесты Кащея, целое число.
*/
#include <stdio.h>

int main() {
	int k, n, res;
	scanf("%d %d", &k, &n);
	res = (n - k) / 33 + 18;
	printf("%d\n", res);
	return 0;
}