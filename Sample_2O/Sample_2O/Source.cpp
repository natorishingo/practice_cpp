//2�̐�������͂���Ƒ傫�����ɏo�͂���
#include <stdio.h>

int main(void)
{
	int res1, res2;

	printf("2�̐���=>");
	scanf_s("%d", &res1);
	scanf_s("%d", &res2);

	if (res1 > res2) {
		printf("�傫�����ɕ\��%d ", res1);
		printf("%d\n", res2);
	}
	else {
		printf("�傫�����ɕ\��%d ", res2);
		printf("%d\n", res1);
	}
	return 0;
}
