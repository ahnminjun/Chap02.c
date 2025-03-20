#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int number;

	printf("16진수 정수?");

	scanf("%x", &number);

	printf("16진수 %x는 10진수로 %d입니다.", number, number);

	return 0;
}