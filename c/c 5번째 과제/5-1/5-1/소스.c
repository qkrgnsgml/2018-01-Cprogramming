#include <stdio.h>

void main()
{
	printf("201844082 ¹ÚÈÆÈñ\n");
	int C, F;
	for (C = 10, F = 0; C <= 100; C = C + 10)
	{
		F = 9. / 5.*C + 32;
		printf("%d %d\n", C, F);
	}
}