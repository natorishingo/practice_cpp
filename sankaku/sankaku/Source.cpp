//�O�ӂ���O�p�`�ł��邩�ǂ�������C�O�p�`�Ȃ�ʐς��v�Z����D
#include <stdio.h>
#include <math.h>

int main(void)
{
	double res1, res2, res3, s, a, b, c;

	printf("�ӂ̒���=>");
	scanf_s("%lf", &res1);
	scanf_s("%lf", &res2);
	scanf_s("%lf", &res3);

	if (res1 + res2 >res3 && res1 + res3 >res2 && res2 + res3 >res1) {
		s = (res1 + res2 + res3) / 2;
		a = s - res1;
		b = s - res2;
		c = s - res3;
		double res4 = sqrt(s*a*b*c);

		printf("�ʐ�=%lf\n", res4);
	}

	else {
		printf("�O�p�`�ł͂���܂���D\n");

	}

	return 0;
}
