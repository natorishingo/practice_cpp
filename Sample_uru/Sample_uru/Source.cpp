//�������͂��C�[�N���ǂ������肷��D
#include <stdio.h>

int main(void)
{
	int AD;

	printf("����̔N��=>");
	scanf_s("%d", &AD);

	if (
		AD % 4 == 0 && !(AD % 100 == 0 && !(AD % 400 == 0))
		)
	{
		printf("%d�N�͉[�N�ł��D\n", AD);
	}
	else {
		printf("%d�N�͉[�N�ł͂���܂���D\n", AD);
	}
	return 0;
}
