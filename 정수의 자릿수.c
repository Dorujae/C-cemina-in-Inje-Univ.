#include <stdio.h>

main()
{
	int num, a = 10, b, c;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	c = num;
	if (num >= 1)
	{
		for (b = 1; (num / a) > 0; b++)
		{
			num = num / a;
		}
		printf("%d�� %d�ڸ��� �Դϴ�!", c, b);
	}
	else
		printf("1�̻��� ���ڸ� �Է����ּ���!");
}