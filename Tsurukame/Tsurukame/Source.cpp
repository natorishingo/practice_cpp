//���͂��ꂽ���̐��Ƒ��̐��ŒߋT�Z������D
#include <stdio.h>

int main(void)
{
	int num1, num2, num3, res1, res2;

	printf("���̐�=>");
	scanf_s("%d", &num1);

	printf("���̐�=>");
	scanf_s("%d", &num2);

	num3 = (num2 - num1 * 2) / 2;
	res1 = num1 * 2;
	res2 = num1 * 4;

	if (res1 <= num2 && num2 <= res2 && num2 % 2 == 0) {
		printf("��=%d�H\n�T=%d�C\n", num1 - num3, num3);
	}

	else {
		printf("�v�Z�ł��܂���D\n");
	}

	return 0;
}
