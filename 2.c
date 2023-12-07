	#include <stdio.h>

	int main(void)

	{
		int number;
		printf("");
		scanf("%d", &number);
	

	if (number < 100 || number == 0 || number == 100)
	{
		if (number > 0 || number == 0)
		{
			if (number < 70 || number == 0)
			{
				printf("Basic");
			}
			 if (number > 70)
			{
				printf("Advanced");
			}
		}
	}
	if (number > 100)
		{
			printf("Wrong input");
		}
	if (number < 0)
		 {
			 printf("Wrong input");
		 }
	
	return 0;
	}