//3数を入力し最大値を表示する
#include <stdio.h>

int main(void)
{
	int res1, res2, res3;

	printf("3つの数=>");
	scanf_s("%d", &res1);
	scanf_s("%d", &res2);
	scanf_s("%d", &res3);

	if (res1 > res2 && res1 > res3) {
		printf("最大値=%d\n", res1);
	}
	else if (res2 > res1 && res2 > res3) {
		printf("最大値=%d\n", res2);
	}
	else {
		printf("最大値=%d\n", res3);
	}
	return 0;
}
