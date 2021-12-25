#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a = 3, b = 8, c = 9, d = 2, e = 4;
	int f,g,h,i;
	g = (a < b) ? a : b;
	h = (g < c) ? g : c;
	i = (g < d) ? g : d;
	f = (i < e) ? i : e;
	printf("5가지 수 중에 최소값은 %d \n", f);
}