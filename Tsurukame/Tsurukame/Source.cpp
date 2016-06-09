//“ü—Í‚³‚ê‚½“ª‚Ì”‚Æ‘«‚Ì”‚Å’ß‹TZ‚ğ‚·‚éD
#include <stdio.h>

int main(void)
{
	int num1, num2, num3, res1, res2;

	printf("“ª‚Ì”=>");
	scanf_s("%d", &num1);

	printf("‘«‚Ì”=>");
	scanf_s("%d", &num2);

	num3 = (num2 - num1 * 2) / 2;
	res1 = num1 * 2;
	res2 = num1 * 4;

	if (res1 <= num2 && num2 <= res2 && num2 % 2 == 0) {
		printf("’ß=%d‰H\n‹T=%d•C\n", num1 - num3, num3);
	}

	else {
		printf("ŒvZ‚Å‚«‚Ü‚¹‚ñD\n");
	}

	return 0;
}
