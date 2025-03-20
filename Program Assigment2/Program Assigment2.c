#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int number;
	float grade;

	scanf("%d %f", &number, &grade);
	printf("번호? %d \n학점? %f", number, grade);

	return 0;
}