#include <stdio.h>

typedef struct dlistnode
{
	int data;
	struct dlistnode* next;
	struct dlistnode* prev;
}DListNode;

typedef struct
{
	DListNode* head;
}HeadNode;

HeadNode* createHead()
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL)
		h->head = NULL;
	return h;
}

DListNode* createNode(int data)
{
	DListNode* newNode = (DListNode*)malloc(sizeof(DListNode));
	if (newNode == NULL)
	{
		printf("메모리 할당 실패");
		exit(1);
	}
	else
	{
		newNode->data = data;
		newNode->next = NULL;
		newNode->prev = NULL;
		return newNode;
	}
}

void insertNode(HeadNode* phead, DListNode* preNode, DListNode* newNode)
{
	if (phead->head == NULL)
	{
		//phead->head = preNode;
		phead->head = newNode;
	}
	else
	{
		//DListNode* newNode=createNode(data);
		//newNode->next = preNode->next;
		//preNode->next = newNode;
		//newNode->prev = preNode;
		//if (newNode->next != NULL)
		//	newNode->next->prev = newNode;
		newNode->prev = preNode;
		newNode->next = preNode->next;
		if (preNode->next != NULL) newNode->next->prev = newNode;
		preNode->next = newNode;
	}
}

void printList(HeadNode* h)
{
	DListNode* p;
	printf(" DL = (");
	p = h->head;
	while (p != NULL)
	{
		printf("%d", p->data);
		p = p->next;
		if (p != NULL) printf(", ");
	}
	printf(") \n");
}

void allDelete(HeadNode* h)
{
	DListNode* temp;
	while (h->head != NULL)
	{
		temp = h->head;
		h->head = h->head->next;
		free(temp);
	}
}

DListNode* findNode(HeadNode* phead, int data)
{
	DListNode* temp = phead->head;
	while (temp != NULL)
	{
		if (temp->data == data)
			return temp;
		else
			temp=temp->next;
	}
	return temp;
}

void sel_DelNode(HeadNode* phead, DListNode* d)
{
	//DListNode* temp = phead->head;
	if (phead->head == NULL) return;
	else if (d == NULL) return;
	else
	{
		d->prev->next = d->prev;
		d->next->prev = d->next;
		free(d);
	}
	/*if (phead->head->next == NULL || phead->head->prev)
	{
		free(phead->head);
		phead->head = NULL;
		return;
	}*/
}
int main()
{
	HeadNode* main = createHead();
	DListNode* first = createNode(1);
	//main->head = first;
	DListNode* second = createNode(2);
	insertNode(main, NULL, first);
	printList(main);
	insertNode(main, first, second);
	printList(main);

	DListNode* third = createNode(3);
	insertNode(main, second, third);
	printList(main);

	/*DListNode* search = findNode(main, 2);
	sel_DelNode(main, search);
	printList(main);*/

	allDelete(main);
	printList(main);
	return;
}