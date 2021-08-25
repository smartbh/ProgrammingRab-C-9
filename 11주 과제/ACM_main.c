#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, b, c, d, smallNum, bigNum;
	int test_num;

	printf("******************\n자기복제수 구하기\n******************\n");

	printf("\n원하는 구간을 입력하세요(두번째입력값이커야함) :");

	scanf("%d %d", &smallNum, &bigNum);

	/*scanf("%d",&test_num);*/

	for (i = smallNum; i<bigNum; i++)

	{
		d = i;
		c = 1;

		while (d)    // d가 0이 될때까지 
		{
			d /= 10;
			c = c * 10;
		}

		b = (i * i) - i;

		if (b % c == 0)
			printf("%d ( %d )\n", i, i*i);
	}

	/*for (i = 0; i < test_num; i++)
	{

	}*/

	system("pause");
	return 0;

}