#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a = 3, b = 8, c = 9, d = 2, e = 4;
	int f,g,h,i;
	f = (((i=((h = ((g = (a < b) ? a : b) < c) ? g : c) < d) ? h : d)<e)? i:e);
	printf("5가지 수 중에 최소값은 %d \n", f);
}