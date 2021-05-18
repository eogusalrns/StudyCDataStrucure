#include <stdio.h>

int LSearch(int* pary, int sz, int tg)
{
	for (int i = 0; i < sz; i++)
	{
		if (pary[i] == tg)
			return i;
	}
	return -1;
}
int main()
{
	int ary[] = { 3,5,8,2,7,6,1 };
	int size = sizeof(ary) / sizeof(ary[0]);
	int index = LSearch(ary, size, 2);
	if (index == -1) printf("찾기실패\n");
	printf("%d", index);
	return 0;
}