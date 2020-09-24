#include <stdio.h>

main()
{
	int num, a = 10, b, c;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);
	c = num;
	if (num >= 1)
	{
		for (b = 1; (num / a) > 0; b++)
		{
			num = num / a;
		}
		printf("%d는 %d자리수 입니다!", c, b);
	}
	else
		printf("1이상의 숫자를 입력해주세요!");
}