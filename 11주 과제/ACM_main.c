#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, b, c, d, smallNum, bigNum;
	int test_num;

	printf("******************\n�ڱ⺹���� ���ϱ�\n******************\n");

	printf("\n���ϴ� ������ �Է��ϼ���(�ι�°�Է°���Ŀ����) :");

	scanf("%d %d", &smallNum, &bigNum);

	/*scanf("%d",&test_num);*/

	for (i = smallNum; i<bigNum; i++)

	{
		d = i;
		c = 1;

		while (d)    // d�� 0�� �ɶ����� 
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