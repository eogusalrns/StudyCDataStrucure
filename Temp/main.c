#include <stdio.h>
#include <stdlib.h>

struct employee{
	char name[10];
	int year;
	int pay;
};

int main()
{
	struct employee Lee;
	struct employee* Sptr = &Lee;
	strcpy(Sptr->name, "�̼���");
	Sptr->pay = 5900;
	Sptr->year = 1557;
	printf("%s %d %d", Sptr->name, Sptr->pay, Sptr->year);
	//char str[20] = "DATA STRUCTURE";
	//int i, cnt=0;
	//for (i = 0; str[i]; i++)
	//{
	//	printf("%c", str[i]);
	//	cnt++;
	//}
	//printf("%d", cnt);
	//int i, length = 0;
	//char str[50];
	//printf("���ڿ��� �Է��ϼ��� : ");
	//gets(str);
	//printf("�Էµ� ���ڿ��� : ");
	//for (i = 0; str[i]; i++)
	//	printf("%c", str[i]);
	//length = strlen(str);
	//printf("\n�Էµ� ���ڿ��� ���� %d \n", length);
	//int arr[2][3][4];
	//int i, j, k, value = 1;
	//for (i = 0; i < 2; i++)
	//	for (j = 0; j < 3; j++)
	//		for (k = 0; k < 4; k++)
	//		{
	//			arr[i][j][k] = value;
	//			printf("arr[%d][%d][%d]=%d\n", i, j, k, arr[i][j][k]);
	//			value++;
	//		}
	//int i, j, k;
	//char ss[2][3][20];
	//for (i = 0; i < 2; i++)
	//{
	//	printf("�л� %d�� �̸� : ",i+1);
	//	gets(ss[i][0]);
	//	printf("�л� %d�� �а� : ",i+1);
	//	gets(ss[i][1]);
	//	printf("�л� %d�� �й� : ",i+1);
	//	gets(ss[i][2]);
	//}
	//for (i = 0; i < 2; i++)
	//{
	//	printf("\n�л� %d", i + 1);
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("\n\t");
	//		for (k = 0; ss[i][j][k] != '\0'; k++)
	//			printf("%c", ss[i][j][k]);
	//	}
	//}
	//int i = 10, j = 20;
	//int* ptr;
	//printf("i�� �� : %d, j�� �� : %d\n", i, j);
	//printf("i�� �޸� �ּ�(&i) : %u\n", &i);
	//printf("j�� �޸� �ּ�(&j) : %u\n", &j);
	//ptr = &i;
	//printf("ptr�� �޸� �ּ�(&ptr) : %u\n", &ptr);
	//printf("ptr�� ��(ptr) = %u\n", ptr);
	//printf("ptr�� ������(*ptr) = %d\n", *ptr);
	//ptr = &j;
	//printf("ptr�� �޸� �ּ�(&ptr) : %u\n", &ptr);
	//printf("ptr�� ��(ptr) = %u\n", ptr);
	//printf("ptr�� ������(*ptr) = %d\n", *ptr);
	//i = *ptr;
	//printf("i�� �� : %d\n", i);
	//int i;
	//char string1[20] = "Dreams come true!", string2[20], * ptr1, * ptr2;
	//ptr1 = string1;
	//printf("string1 �ּ� %u \t ptr1 �ּ� %u\n", string1, ptr1);
	//printf("string1 : %s \t ptr1 : %s\n", string1, ptr1);
	//printf("%s\n", ptr1 + 7);
	//ptr2 = &string1[7];
	//printf("%s\n", ptr2);
	//for (i = 16; i >= 0; i--)
	//	putchar(*(ptr1 + i));
	//for (i = 0; i < 20; i++)
	//	string2[i] = *(ptr1 + i);
	//printf("\nstring1 : %s\n", string1);
	//printf("string2 : %s\n", string2);
	//*ptr1 = 'P';
	//*(ptr1 + 1) = 'e';
	//*(ptr1 + 2) = 'a';
	//*(ptr1 + 3) = 'c';
	//*(ptr1 + 4) = 'e';
	//printf("string = %s\n", string1);
	//int i;
	//char* ptr[4] = { {"Korea"},{"Seoul"},{"Mapo"},{"152���� 2 / 3"} };
	//for (i = 0; i < 4; i++)
	//	printf("%s\n", ptr[i]);
	//ptr[2] = "Jonglo";
	//for (i = 0; i < 4; i++)
	//	printf("%s\n", ptr[i]);
	//char* ptrArray[2];
	//char** ptrptr;
	//int i;
	//ptrArray[0] = "Korea";
	//ptrArray[1] = "Seoul";
	//ptrptr = ptrArray;
	//printf("ptrArray[0]�� �ּ� %u\n", &ptrArray[0]);
	//printf("ptrArray[0]�� �� %u\n", ptrArray[0]);
	//printf("ptrArray[0]�� ������ %c\n", *ptrArray[0]);
	//printf("ptrArray[0]�� �������ڿ� %s\n", *ptrArray);
	//printf("ptrArray[1]�� �ּ� %u\n", &ptrArray[1]);
	//printf("ptrArray[1]�� �� %u\n", ptrArray[1]);
	//printf("ptrArray[1]�� ������ %c\n", *ptrArray[1]);
	//printf("ptrArray[1]�� �������ڿ� %s\n", *(ptrArray+1));
	//printf("ptrptr�� �ּҰ� %u\n", &ptrptr);
	//printf("ptrptr�� �� %u\n", ptrptr);
	//printf("ptrptr�� 1�� ������ %u\n", *ptrptr);
	//printf("ptrptr�� 2�� ������ %c\n", **ptrptr);
	//printf("ptrptr�� 2�� �������ڿ� %s\n", *ptrptr);
	//printf("*ptrArray[0] : ");
	//for (i = 0; i < 5; i++)
	//	printf("%c", *(ptrArray[0] + i));
	//printf("\n**ptrptr : ");
	//for (i = 0; i < 5; i++)
	//	printf("%c", *(*ptrptr + i));
	//printf("\nm*ptrArray[1] : ");
	//for (i = 0; i < 5; i++)
	//	printf("%c", *(ptrArray[1] + i));
	//printf("\n**(ptrptr+1) : ");
	//for (i = 0; i < 5; i++)
	//	printf("%c", *(*(ptrptr + 1)+i));
	//int i = 0;
	//struct employee Lee[4] = {
	//{"����ȣ",2014,4200},
	//{"���ѿ�",2015,4000},
	//{"�̰��",2000,6000},
	//{"��ġ��",1990,8000} };
	//for (i = 0; i < 4; i++)
	//{
	//	printf("�̸� : %s\n", Lee[i].name);
	//	printf("�Ի� : %d\n", Lee[i].year);
	//	printf("���� : %d\n\n", Lee[i].pay);
	//}
	return 0;
}