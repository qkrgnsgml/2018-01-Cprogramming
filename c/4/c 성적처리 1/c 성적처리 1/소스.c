#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()

{
	printf("201844082¹ÚÈÆÈñ ");
	int S;
	scanf_s("%d", &S);
	if (S >= 90)
	{
		printf("A");
	}
	else if (S>79)
	{
		printf("B");
	}
	else if (S>69)
	{
		printf("C");
	}
	else if (S>59)
	{
		printf("D");
	}
	else
		printf("F");
}