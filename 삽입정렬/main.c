#include <stdio.h>

void InsertSort(int* pary, int sz)
{
	int i, j, k, temp;
	for (i = 1; i < sz; i++)
	{
		for (j = i; j > 0; j--)
		{
			if (pary[j - 1] > pary[j])
			{
				temp = pary[j];
				pary[j] = pary[j - 1];
				pary[j - 1] = temp;
			}
		}
		for (k = 0; k < sz; k++)
			printf("%3d", pary[k]);
		printf("\n");
	}
	
}
//
//void print(int* pary,int size)
//{
//	for(int i=0;i<size;i++)
//		printf("%d\n", pary[i]);
//
//}
int main()
{
	int ary[] = { 4,2,7,5,9,1,8,3,6 };
	int size = sizeof(ary) / sizeof(ary[0]);
	InsertSort(ary, size);
	//print(ary, size);
	return 0;
}