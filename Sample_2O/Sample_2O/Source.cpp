//2‚Â‚Ì®”‚ğ“ü—Í‚·‚é‚Æ‘å‚«‚¢‡‚Éo—Í‚·‚é
#include <stdio.h>

int main(void)
{
	int res1, res2;

	printf("2‚Â‚Ì®”=>");
	scanf_s("%d", &res1);
	scanf_s("%d", &res2);

	if (res1 > res2) {
		printf("‘å‚«‚¢‡‚É•\¦%d ", res1);
		printf("%d\n", res2);
	}
	else {
		printf("‘å‚«‚¢‡‚É•\¦%d ", res2);
		printf("%d\n", res1);
	}
	return 0;
}
