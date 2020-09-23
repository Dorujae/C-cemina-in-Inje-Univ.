#include <stdio.h>

main()
{
	int pizza, human;
	printf("사람들이 피자를 몇조각씩 먹을 수 있을까요?\n");
	printf("피자를 먹는 사람은 몇명인가요? : ");
	scanf_s("%d", &human);
	printf("피자 몇판을 가지고 있나요? : ");
	scanf_s("%d", &pizza);

	printf("======================================\n");

	if (8 * pizza >= human)
	{
		printf("사람들은 %d조각씩 먹을 수 있겠군요!\n", 8 * pizza / human);
		printf("남은 피자조각은 %d조각 입니다.", 8 * pizza % human);
	}
	else
	{
		printf("돈 좀 씁시다!");
	}
}