//���͂��ꂽ3�̐�����傫�����ɕ��ׂ�D
#include <stdio.h>
int main(void)
{
	int res1, res2, res3;

	printf("3�̐���=>");
	scanf_s("%d", &res1);
	scanf_s("%d", &res2);
	scanf_s("%d", &res3);

	if (res1 > res2 && res1 > res3 && res2 > res3) {
		printf("�傫�����ɕ\��%d,%d,%d\n", res1, res2, res3);
	}
	else if (res1 > res2 && res1 > res3 && res3 > res2) {
		printf("�傫�����ɕ\��%d,%d,%d\n", res1, res3, res2);
	}
	else if (res2 > res1 && res2 > res3 && res1 > res3) {
		printf("�傫�����ɕ\��%d,%d,%d\n", res2, res1, res3);
	}
	else if (res2 > res1 && res2 > res3 && res3 > res1) {
		printf("�傫�����ɕ\��%d,%d,%d\n", res2, res3, res1);
	}
	else if (res3 > res1 && res3 > res2 && res1 > res2) {
		printf("�傫�����ɕ\��%d,%d,%d\n", res3, res1, res2);
	}
	else if (res1 == res2 && res1 == res3) {
		printf("���ׂē������ł�\n");
	}
	else {
		printf("�傫�����ɕ\��%d,%d,%d\n", res3, res2, res1);
	}

	return 0;
}
