#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define SIZE 6
int rear = 0;
int front = 0;
int queue[SIZE];

typedef struct q
{
	int data[SIZE];
	int front, rear;
}Q;

Q* createQueue()
{
	Q* cQ;
	cQ = (Q*)malloc(sizeof(Q));
	cQ->front = 0;
	cQ->rear = 0;
	return cQ;
}

int Empty(Q* cQ)
{
	if (cQ->rear == cQ->front) return true;
	else return false;
}
int Full(Q* cQ)
{
	if (cQ->front == (cQ->rear + 1) % SIZE) return true;
	else return false;

}
void enQueue(Q* cQ,int data)//큐에 삽입
{
	if (Full(cQ)) printf("Queue overflow!!!\n");
	else
	{
		cQ->rear = (cQ->rear+1) % SIZE;
		cQ->data[cQ->rear] = data;
	}
}
int deQueue(Q* cQ)//큐에 반환(출력?)
{
	if (Empty(cQ)) {
		printf("Queue overflow\n");
		return;
	}
	else
	{
		cQ->front = (cQ->front + 1) % SIZE;
		return cQ->data[cQ->front];
	}
}

int main()
{
	Q* cQ = createQueue();
	
	enQueue(cQ,10);
	enQueue(cQ,20);
	enQueue(cQ,30);
	printf("%d\n", deQueue(cQ));
	printf("%d\n", deQueue(cQ));
	printf("%d\n", deQueue(cQ));
	return;
}