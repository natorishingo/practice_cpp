//変数とキーボード入力～少数を入力する～
#include <stdio.h>

int main(void)
{
	double num;

	printf("少数を入力してください。\n");

	scanf_s("%lf", &num);

	printf("%fが入力されました。\n", num);

	return 0;
}
