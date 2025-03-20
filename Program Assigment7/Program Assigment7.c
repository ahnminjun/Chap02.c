#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char clothes;

	printf("옷 사이즈(S,M,L)?\n");

	scanf(" %c", &clothes);

	printf("%c 사이즈를 선택했습니다.", clothes);

	return 0;

}