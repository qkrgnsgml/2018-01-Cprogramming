#include <stdio.h>

void main()
{
	printf("201844082������\n");
	int cnt = 0, tot = 0, ave, num, i, a, max, min;
	printf("��� �����͸� �Է¹��� ���ΰ�?(���� 0~100)\n");
	scanf_s("%d", &a);
	max = 0;
	min = 100;
	for (i = 0; i < a; i = i + 1)
	{
		scanf_s("%d", &num);
		if (num > 0)
		{
			tot = tot + num;
			cnt = cnt + 1;
			if (max < num)
			{
				max = num;
			}
			if (min > num)
			{
				min = num;
			}
		}
	}
	ave = tot / cnt;
	printf("�ִ밪�� %d �ּҰ��� %d �հ�� %d�̰� ����� %d�̴�.", max, min, tot, ave);
}