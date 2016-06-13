#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, res1, num1, num2, num3;

	printf("“ñŸ•û’ö®‚Ì3‚Â‚ÌŒW”abc=>");
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	scanf_s("%lf", &c);

	res1 = b*b - 4*a*c;
	num1 = sqrt(res1);
	num2 = ((b - 2 * b) + num1) / 2 * a;
	num3 = ((b - 2 * b) - num1) / 2 * a;

	if (res1 > 0) {
		printf("x=%lf,%lf\n", num2, num3);
	}
	else if (res1 == 0) {
		printf("x=%lf,d‰ğ‚Å‚·D\n", num2);
	}
	else {
		printf("‹•ª‚Å‚·D\n");
	}

	return 0;

}
