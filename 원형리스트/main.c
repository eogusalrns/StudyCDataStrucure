#include <stdio.h>

typedef struct listnode {
	int data;
	struct listnode* link;
}ListNode;

typedef struct {
	ListNode* head;
}HeadNode;

HeadNode* createHead()
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL;
	return h;
}

ListNode* createNode(HeadNode* phead,int data)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode == NULL)
	{
		printf("메모리 할당 실패!!");
		return;
	}
	else
	{
		newNode->data = data;
		newNode->link = NULL;
		return newNode;
	}
}

void insertFirstNode(HeadNode* phead, ListNode* newNode)
{
	if (phead->head == NULL)
	{
		phead->head = newNode;
		newNode->link = newNode;
	}
	else
	{
		//ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
		//temp = phead->head;
		//while (temp->link !=phead->head)
		//{
		//	temp = temp->link;
		//}
		//newNode->link = temp->link;
		//temp->link = newNode;
		//phead->head = newNode;
		newNode->link = phead->head;
		phead->head->link = newNode;
	}
}

void insertLastNode(HeadNode* phead, ListNode* newNode)
{
	if (phead->head == NULL)
	{
		phead->head = newNode;
		newNode->link = newNode;
	}
	else
	{
		/*ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
		temp = phead->head;
		while (temp->link != phead->head)
		{
			temp = temp->link;
		}
		temp->link = newNode;
		newNode->link = phead;*/
		newNode->link = phead->head->link;
		phead->head->link = newNode;
		phead->head = newNode;//phead->head가 마지막 노드
		
	}
}
void printList(HeadNode* h)
{
	ListNode* p;
	printf(" CL = (");
	p = h->head;
	do 
	{
		printf("%d", p->data);
		p = p->link;
		if (p != h->head) printf(", ");
	} while (p != h->head);
	printf(") \n");
}

int main()
{
	HeadNode* h = createHead();
	insertFirstNode(h, createNode(h,10));
	printList(h);
	insertLastNode(h, createNode(h, 20));
	printList(h);

	return;
}