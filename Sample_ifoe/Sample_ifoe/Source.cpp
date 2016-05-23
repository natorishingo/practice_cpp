//整数を入力し，偶数か奇数か判定する．
#include <stdio.h>

int main(void)
{
	int res;
	
	printf("数=>");
	scanf_s("%d", &res);

	if (res%2 == 0) {
		printf("偶数です．\n");
	}
	else {
		printf("奇数です．\n");
	}
	return 0;
}
