#include <stdio.h>

int hqp(x,y);
int cha(x,y);
int gob(x,y);
int bun(x,y);
void main()
{
	printf("201844082¹ÚÈÆÈñ\n");
	int x=20, y=10, a, b, c, d;
	a = hqp(20,10);
	b = cha(20, 10);
	c = gob(20, 10);
	d = bun(20, 10);
	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
}

int hqp(x,y)
{
	int a;
	a = x + y;
}

int cha(x,y)
{
	int b;
	b = x - y;
}

int gob(x,y)
{
	int c;
	c = x * y;
}

int bun(x,y)
{
	int d;
	d = x / y;
}
