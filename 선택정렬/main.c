#include <stdio.h>

void selectSort(int* pary, int sz)
{
	int i, j, k, min,temp;
	for (i = 0; i < sz - 1; i++)
	{
		min = i;
		for (j = i+1; j < sz; j++)
		{
			if (pary[min] > pary[j])
			{
				min = j;
			}
			temp = pary[min];
			pary[min] = pary[i];
			pary[i] = temp;
			printf("\n%d ´Ü°è : ", i + 1);
			for (k = 0; k < sz; k++)
				printf("%3d", pary[k]);
		}
	}
}

int main()
{
	int ary[] = { 10,9,8,7,6,5,4,3,2,1,0 };
	int size = sizeof(ary) / sizeof(ary[0]);
	selectSort(ary, size);
	return 0;
}