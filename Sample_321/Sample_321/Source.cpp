//入力された3つの整数を大きい順に並べる．
#include <stdio.h>
int main(void)
{
	int res1, res2, res3;

	printf("3つの整数=>");
	scanf_s("%d", &res1);
	scanf_s("%d", &res2);
	scanf_s("%d", &res3);

	if (res1 > res2 && res1 > res3 && res2 > res3) {
		printf("大きい順に表示%d,%d,%d\n", res1, res2, res3);
	}
	else if (res1 > res2 && res1 > res3 && res3 > res2) {
		printf("大きい順に表示%d,%d,%d\n", res1, res3, res2);
	}
	else if (res2 > res1 && res2 > res3 && res1 > res3) {
		printf("大きい順に表示%d,%d,%d\n", res2, res1, res3);
	}
	else if (res2 > res1 && res2 > res3 && res3 > res1) {
		printf("大きい順に表示%d,%d,%d\n", res2, res3, res1);
	}
	else if (res3 > res1 && res3 > res2 && res1 > res2) {
		printf("大きい順に表示%d,%d,%d\n", res3, res1, res2);
	}
	else if (res1 == res2 && res1 == res3) {
		printf("すべて同じ数です\n");
	}
	else {
		printf("大きい順に表示%d,%d,%d\n", res3, res2, res1);
	}

	return 0;
}
