//��������͂��C������������肷��D
#include <stdio.h>

int main(void)
{
	int res;
	
	printf("��=>");
	scanf_s("%d", &res);

	if (res%2 == 0) {
		printf("�����ł��D\n");
	}
	else {
		printf("��ł��D\n");
	}
	return 0;
}
