//�����𔻕ʂ��ď�������啶���C�啶�����������ɕϊ��C����ȊO���͂���
#include <stdio.h>

int main(void)
{
	char a;

	printf("���������=>");
	a = getchar();

	if ('\x41'<= a && a <= '\x5a') {
		printf("�����u%c�v�͑啶���ł��D", a);
		printf("�������́u%c�v�ł�\n", a + 32);
	}
	else if ('\x61' <= a && a <= '\x7a') {
		printf("�����u%c�v�͏������ł��D", a);
		printf("�啶���́u%c�v�ł�\n", a - 32);
	}
	else {
		printf("�A���t�@�x�b�g�ȊO�ł�\n");
	}

	return 0;
}
