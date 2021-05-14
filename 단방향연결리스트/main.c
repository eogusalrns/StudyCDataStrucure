#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
	int data;
	struct node* next;
}Node;

typedef struct
{
	Node* head;//��带 ����ų �� �ִ� Ÿ��
}HeadNode;

/*����� �����ϴ� �Լ�*/
HeadNode* createHead()
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL) h->head = NULL;
	return h;
}

void preInsertNode(HeadNode* h,int i)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode != NULL)
	{
		newNode->data = i;
		newNode->next = h->head;
		h->head = newNode;
	}
}

void rearInsertNode(HeadNode* h, int i)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	Node* curr;
	
	if (newNode != NULL)
	{
		newNode->data = i;
		newNode->next = NULL;
		curr = h->head;
		if (h->head == NULL)//����Ʈ�ƹ��͵�������
		{
			h->head = newNode;
			return;
		}
		while (curr->next != NULL)//������ ��� ã�ư�
		{
			curr = curr->next;
		}
		curr->next = newNode;
	}
}
	

void Print_Node(HeadNode* h)
{
	Node* curr;
	printf("head =(");
	curr = h->head;
	while (curr != NULL)
	{
		printf("%d", curr->data);
		curr = curr->next;
		if (curr != NULL)
			printf(", ");
	}
	printf(")\n");
}

void All_Delete_Node(HeadNode* h)
{
	Node* curr;
	//curr = h->head;
	while (h->head != NULL)
	{
		curr = h->head;
		h->head = h->head->next;
		free(curr);
		//curr = NULL;
	}
	//h->head = curr;
	//h->head = NULL;
}
Node* searchNode(HeadNode* h, int data)//��� �˻��Լ�
{
	Node* curr = h->head;
	while (curr != NULL)
	{
		if (curr->data == data)
		{
			return curr;
		}
		curr = curr->next;
	}
	return NULL;
}
void Sel_Delete_Node(HeadNode* h, Node* sel)
{
	Node* curr;
	if (h->head == NULL) return;//�����°��
	if (h->head->next == NULL)//����Ѱ���������
	{
		free(h->head);
		h->head = NULL;
		return;
	}
	else if (sel == NULL) return;//�����ҳ�尡NULL
	else//�����ҳ��������
	{
		curr = h->head;
		while (curr->next != sel)
		{
			curr = curr->next;
		}
		curr->next = sel->next;
		free(sel);
	}
}
int main(void)
{
	HeadNode* head=createHead();
	preInsertNode(head, 1);
	preInsertNode(head, 2);
	rearInsertNode(head, 3);
	rearInsertNode(head, 4);
	//All_Delete_Node(head);//h->head=NULL �� ����
	Print_Node(head);
	Node* search = searchNode(head, 3);
	Sel_Delete_Node(head, search);
	Print_Node(head);
	preInsertNode(head, 5);
	Print_Node(head);
	rearInsertNode(head, 6);
	Print_Node(head);
	return 0;
}