//2つの整数を入力すると大きい順に出力する
#include <stdio.h>

int main(void)
{
	int res1, res2;

	printf("2つの整数=>");
	scanf_s("%d", &res1);
	scanf_s("%d", &res2);

	if (res1 > res2) {
		printf("大きい順に表示%d ", res1);
		printf("%d\n", res2);
	}
	else {
		printf("大きい順に表示%d ", res2);
		printf("%d\n", res1);
	}
	return 0;
}
