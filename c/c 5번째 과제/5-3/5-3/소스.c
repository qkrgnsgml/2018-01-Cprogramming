#include <stdio.h>

void main()
{
	printf("201844095 Á¤¼öÇö \n");
	int f = 0, c = 0; //f=È­¾¾¿Âµµ, c=¼·¾¾¿Âµµ
	do
	{
		c = c + 10;
		f = 9. / 5. * c + 32;
		printf("¼·¾¾=%d È­¾¾=%d\n", c, f);
	} while (c < 100);
}