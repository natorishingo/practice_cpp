//3������͂��ő�l��\������
#include <stdio.h>

int main(void)
{
	int res1, res2, res3;

	printf("3�̐�=>");
	scanf_s("%d", &res1);
	scanf_s("%d", &res2);
	scanf_s("%d", &res3);

	if (res1 > res2 && res1 > res3) {
		printf("�ő�l=%d\n", res1);
	}
	else if (res2 > res1 && res2 > res3) {
		printf("�ő�l=%d\n", res2);
	}
	else {
		printf("�ő�l=%d\n", res3);
	}
	return 0;
}
