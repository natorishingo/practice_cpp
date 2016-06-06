/* for文を利用して，1日目に1円，2日目に2円，3日目に4円というように，前日の2倍のおこずかいをもらうとき，
1日にもらう額が1万円を超えるのは何日目になるのかを算出するプログラム */

#include <stdio.h>
int main(void)
{
	int i, num;

	for ((i = 1, num = 1); i < 10000; (i *= 2, num++)) {
		printf("%d日目:%d円\n", num, i);
	}

	printf("%d日目のお小遣いが%d円となり，1万円を越えた．\n", num, i);

	return 0;
}
