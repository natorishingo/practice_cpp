//“ü—Í‚³‚ê‚½”‚ÌŠKæ‚ğ‚à‚Æ‚ß‚é
#include <stdio.h>

int main(void)
{
	int num1, num2 = 1, i;

	printf("n=>");
	scanf_s("%d", &num1);

	for (i = 1; i <= num1; ++i) {
		num2 = num2 * i;
	}
	printf("%d!=%d\n", num1, num2);
	
	return 0;
}
