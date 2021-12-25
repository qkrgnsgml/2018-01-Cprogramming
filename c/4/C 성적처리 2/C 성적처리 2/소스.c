#include <stdio.h>

void main()
{
	printf("201844082¹ÚÈÆÈñ ");
	int S;
	scanf_s("%d", &S);
	switch (S / 10)
	{
	case 10:
	case 9: printf("A");
		break;
	case 8: printf("B");
		break;
	case 7: printf("C");
		break;
	case 6: printf("D");
		break;
	default:printf("F");
	}
}