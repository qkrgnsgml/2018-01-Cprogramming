#include <stdio.h>

void main()
{
	printf("201844095 ������ \n");
	int f = 0, c = 0; //f=ȭ���µ�, c=�����µ�
	do
	{
		c = c + 10;
		f = 9. / 5. * c + 32;
		printf("����=%d ȭ��=%d\n", c, f);
	} while (c < 100);
}