#include <stdio.h>

main()
{
	int pizza, human;
	printf("������� ���ڸ� �������� ���� �� �������?\n");
	printf("���ڸ� �Դ� ����� ����ΰ���? : ");
	scanf_s("%d", &human);
	printf("���� ������ ������ �ֳ���? : ");
	scanf_s("%d", &pizza);

	printf("======================================\n");

	if (8 * pizza >= human)
	{
		printf("������� %d������ ���� �� �ְڱ���!\n", 8 * pizza / human);
		printf("���� ���������� %d���� �Դϴ�.", 8 * pizza % human);
	}
	else
	{
		printf("�� �� ���ô�!");
	}
}