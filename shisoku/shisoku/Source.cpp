//�������͂Ŏl�����Z������D

#include <stdio.h>
int main(void)
{
	double res1, res2;
	char a;

	printf("�v�Z��=");
	scanf_s("%lf", &res1);
	a = getchar();
	scanf_s("%lf", &res2);

	if (a == '\x02b') {
		printf("%lf+%lf=%lf\n", res1, res2, (res1+res2));
	}
	else if (a == '\x02d') {
		printf("%lf-%lf=%lf\n", res1, res2, (res1 - res2));
	}
	else if (a == '\x02a') {
		printf("%lf*%lf=%lf\n", res1, res2, (res1 * res2));
	}
	else if (a == '\x02f') {
		printf("%lf/%lf=%lf\n", res1, res2, (res1 / res2));
	}
	else {
		printf("��������������܂���D\n");
	}

	return 0;
}
