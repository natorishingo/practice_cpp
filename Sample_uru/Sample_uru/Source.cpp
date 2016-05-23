//西暦を入力し，閏年かどうか判定する．
#include <stdio.h>

int main(void)
{
	int AD;

	printf("西暦の年数=>");
	scanf_s("%d", &AD);

	if (
		AD % 4 == 0 && !(AD % 100 == 0 && !(AD % 400 == 0))
		)
	{
		printf("%d年は閏年です．\n", AD);
	}
	else {
		printf("%d年は閏年ではありません．\n", AD);
	}
	return 0;
}
