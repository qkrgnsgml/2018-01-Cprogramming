#include <stdio.h>


void main()

{
	printf("201844082 ¹ÚÈÆÈñ\n");
	int F, C = 0;
	while (C < 100)
	{
		C = C + 10;
		F = 9. / 5. * C + 32;
		printf("%d %d\n", C, F);
	}
}