#include <stdio.h>
#include <math.h>
void BubbleSort(int arr[], int num)
{
	int i, j, temp;
	for (i = num - 1; i >= 0; i--)
		for (j = 0; j < i; j++)
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}
int main()
{
	int N = 1, i;
	while (1)
	{
		int a = 0, b = 0, zero_cnt = 0, temp;
		int num[14] = { 0 };
		scanf("%d", &N);
		if (N == 0)
			break;
		for (i = 0; i < N; i++)
		{
			scanf("%d", &num[i]);
			if (num[i] == 0)
				zero_cnt++;
		}
		BubbleSort(num, N);
		for (i = 0; i < 2; i++)
			if (num[i] == 0)
			{
				temp = num[i];
				num[i] = num[zero_cnt + i];
				num[zero_cnt + i] = temp;
			}
		int index = N / 2 - 1;
		if (N % 2 == 0)
		{
			for (i = 0; i < N; i++)
			{
				if (i % 2 == 0)
					a += num[i] * pow(10, index);
				else
				{
					b += num[i] * pow(10, index);
					index--;
				}
			}
		}
		else
		{
			for (i = 0; i < N; i++)
			{
				if (i % 2 == 0)
					a += num[i] * pow(10, index + 1);
				else
				{
					b += num[i] * pow(10, index);
					index--;
				}
			}
		}
		printf("%d\n", a + b);
	}
	return 0;
}