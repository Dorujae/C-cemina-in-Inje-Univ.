#include <stdio.h>

int main()
{
	int A, B;
	scanf_s("%d %d", &A, &B);

	if (A > 0 && B < 10)
		printf("%d", A + B);
	else
		printf("A�� 0 ���ϰų� B �� 10 �̻��Դϴ�!");

	return 0;
}