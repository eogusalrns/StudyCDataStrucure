#include <stdio.h>
typedef struct node
{
	int data;
	struct node* link;
}Node;

void addNode(Node* target, int data)
{
	Node* curr = (Node*)malloc(sizeof(Node));
	curr->data = data;
	curr->link = target->link;
	target->link = curr;
	//free(newNode);
}
int main()
{
	Node* head = (Node*)malloc(sizeof(Node));
	head->link = NULL;
	int i = 1;
	addNode(head, 10);
	//printf("%d\n", head->link->data);
	addNode(head, 20);
	//printf("%d\n", head->link->link->data);
	addNode(head, 65536);//제일 앞으로 입력

	Node* curr = head->link;
	while (curr != NULL)
	{
		printf("%d 번째 노드 데이터 : %d\n", i++, curr->data);
		curr = curr->link;
	}

	free(head);
	free(curr);
	return 0;
}