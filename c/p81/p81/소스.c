#include <stdio.h>

void main()
{
	printf("201844082박훈희\n");
	int cnt = 0, tot = 0, ave, num, i, a, max, min;
	printf("몇개의 데이터를 입력받을 것인가?(범위 0~100)\n");
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
	printf("최대값은 %d 최소값은 %d 합계는 %d이고 평균은 %d이다.", max, min, tot, ave);
}