#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i,rand1, rand2;

	srand(time(NULL));

	for (i = 1; i < 30; i += 7)
	{
		rand1 = (rand() % 88) + 11;

		rand2 = (rand() % 88) + 11;

		if (rand1 != rand2)
		{
			printf("[%02d:%02d %02d] ", i, rand1, rand2);
		}
		else
		{
			while (rand1 == rand2)
			{
				if (rand1 != rand2)
				{
					printf("[%02d:%02d %02d] ", i, rand1, rand2);
				}
			}
		}
	}

	printf("\n");

	for (i = 2; i < 31; i += 7)
	{

		rand1 = (rand() % 88) + 11;

		rand2 = (rand() % 88) + 11;

		if (rand1 != rand2)
		{
			printf("[%02d:%02d %02d] ", i, rand1, rand2);
		}
		else
		{
			while (rand1 == rand2)
			{
				if (rand1 != rand2)
				{
					printf("[%02d:%02d %02d] ", i, rand1, rand2);
				}
			}
		}
	}

	printf("\n");

	for (i = 3; i < 32; i+=7)
	{
		rand1 = (rand() % 88) + 11;

		rand2 = (rand() % 88) + 11;

		if (rand1 != rand2)
		{
			printf("[%02d:%02d %02d] ", i, rand1, rand2);
		}
		else
		{
			while (rand1 == rand2)
			{
				if (rand1 != rand2)
				{
					printf("[%02d:%02d %02d] ", i, rand1, rand2);
				}
			}
		}
	}

	printf("\n");

	for (i = 4; i < 33; i += 7)
	{
		rand1 = (rand() % 88) + 11;

		rand2 = (rand() % 88) + 11;

		if (rand1 != rand2)
		{
			printf("[%02d:%02d %02d] ", i, rand1, rand2);
		}
		else
		{
			while (rand1 == rand2)
			{
				if (rand1 != rand2)
				{
					printf("[%02d:%02d %02d] ", i, rand1, rand2);
				}
			}
		}
	}

	printf("\n");

	for (i = 5; i < 34; i += 7)
	{
		rand1 = (rand() % 88) + 11;

		rand2 = (rand() % 88) + 11;

		if (rand1 != rand2)
		{
			printf("[%02d:%02d %02d] ", i, rand1, rand2);
		}
		else
		{
			while (rand1 == rand2)
			{
				if (rand1 != rand2)
				{
					printf("[%02d:%02d %02d] ", i, rand1, rand2);
				}
			}
		}
	}

	printf("\n");

	for (i = 6; i < 35; i += 7)
	{
		rand1 = (rand() % 88) + 11;

		rand2 = (rand() % 88) + 11;

		if (rand1 != rand2)
		{
			printf("[%02d:%02d %02d] ", i, rand1, rand2);
		}
		else
		{
			while (rand1 == rand2)
			{
				if (rand1 != rand2)
				{
					printf("[%02d:%02d %02d] ", i, rand1, rand2);
				}
			}
		}
	}

	printf("\n");

	for (i = 7; i < 36; i += 7)
	{
		rand1 = (rand() % 88) + 11;

		rand2 = (rand() % 88) + 11;

		if (rand1 != rand2)
		{
			printf("[%02d:%02d %02d] ", i, rand1, rand2);
		}
		else
		{
			while (rand1 == rand2)
			{
				if (rand1 != rand2)
				{
					printf("[%02d:%02d %02d] ", i, rand1, rand2);
				}
			}
		}
	}
	printf("\n");
}








