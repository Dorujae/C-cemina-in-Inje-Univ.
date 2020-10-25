#include <stdio.h>

int main()
{
	int input;

	while (1)
	{
		scanf_s("%d", &input);
		if (input % 2 == 0)
			printf("홀수를 입력하세요!\n");
		else
			break;
	}

	for (int row = 1; row <= input; row++)
	{
		for (int col = 1; col <= input; col++)
		{
			if ((row == 1) || (col == 1) || (row == input) || (col == input) || (row == col) || (row + col == input + 1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}