//入力された頭の数と足の数で鶴亀算をする．
#include <stdio.h>

int main(void)
{
	int num1, num2, num3, res1, res2;

	printf("頭の数=>");
	scanf_s("%d", &num1);

	printf("足の数=>");
	scanf_s("%d", &num2);

	num3 = (num2 - num1 * 2) / 2;
	res1 = num1 * 2;
	res2 = num1 * 4;

	if (res1 <= num2 && num2 <= res2 && num2 % 2 == 0) {
		printf("鶴=%d羽\n亀=%d匹\n", num1 - num3, num3);
	}

	else {
		printf("計算できません．\n");
	}

	return 0;
}
