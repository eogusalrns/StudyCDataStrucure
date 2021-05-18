#include <stdio.h>

void quickSort(int* pary, int left, int right){
	int temp;
	if (left >= right) return;
	int pivot = left;
	int lleft = pivot + 1;
	int lright = right;
	
	while (lleft <= lright)
	{
		while (pary[lleft] <= pary[pivot]) lleft++;
		while (pary[lright] >= pary[pivot] && lright>left) lright--;

		if (lleft > lright)
		{
			temp = pary[lright];
			pary[lright] = pary[pivot];
			pary[pivot] = temp;
		}
		else
		{
			temp = pary[lright];
			pary[lright] = pary[lleft];
			pary[lleft] = temp;
		}
	}

	quickSort(pary, left, lright - 1);
	quickSort(pary, lright + 1, right);
	
}

int main()
{
	int ary[] = { 3,5,2,4,7,6,1 };
	int size = sizeof(ary) / sizeof(ary[0]);
	quickSort(ary, 0, size-1);
	for (int k = 0; k < size; k++)
		printf("%3d", ary[k]);
	
	return 0;
}