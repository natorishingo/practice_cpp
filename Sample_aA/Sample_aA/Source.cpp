//文字を判別して小文字を大文字，大文字を小文字に変換，それ以外をはじく
#include <stdio.h>

int main(void)
{
	char a;

	printf("文字を入力=>");
	a = getchar();

	if ('\x41'<= a && a <= '\x5a') {
		printf("文字「%c」は大文字です．", a);
		printf("小文字は「%c」です\n", a + 32);
	}
	else if ('\x61' <= a && a <= '\x7a') {
		printf("文字「%c」は小文字です．", a);
		printf("大文字は「%c」です\n", a - 32);
	}
	else {
		printf("アルファベット以外です\n");
	}

	return 0;
}
