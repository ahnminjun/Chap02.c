#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;
	printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n");
	printf("����?");
	scanf("%i", &number);

	printf("8����: %o\n10����: %d\n16����: %x", number, number, number);
	return 0;


}