#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* link;
}Node;

//typedef struct
//{
//	listNode* head;
//}linkedList_h;
//
//linkedList_h* createLinkedList_h(void)
//{
//	linkedList_h* L;
//	L = (linkedList_h*)malloc(sizeof(linkedList_h));
//	L->head = NULL;
//	return L;
//}
//
//void freeLinkedList_h(linkedList_h* L)
//{
//	listNode* p;
//	while (L->head != NULL)
//	{
//		p = L->head;
//		L->head = L->head->link;
//		free(p);
//		p = NULL;
//	}
//}

int main()
{
	Node* head = (Node*)malloc(sizeof(Node));
	Node* node1 = (Node*)malloc(sizeof(Node));//노드생성
	Node* node2 = (Node*)malloc(sizeof(Node));
	Node* node3 = (Node*)malloc(sizeof(Node));
	Node* node4 = (Node*)malloc(sizeof(Node));
	Node* node5 = (Node*)malloc(sizeof(Node));
	if (node1 == NULL) return;
	head->link = node1;
	node1->data = 10;
	node1->link = node2;
	node2->data = 20;
	node2->link = node3;
	node3->data = 30;
	node3->link = node4;
	node4->data = 40;
	node4->link = node5;
	node5->data = 50;
	node5->link = NULL;
	int i = 1;
	Node* curr = head->link;
	while (curr != NULL)
	{
		printf("%d번째 노드 데이터 : %d\n", i++, curr->data);
		curr = curr->link;
	}
	free(head);
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
	return 0;
}