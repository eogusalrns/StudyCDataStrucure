#include <stdio.h>
#include <stdbool.h>

#define STACK_SZ 3
//#define TRUE 1
//#define FALSE 0

int isEmpty();    //����üũ
int isFull();     //��ȭüũ
void push(int);   //���ÿ� �Է�
int pop();        //���ÿ��� ���
int peek();       //������ ����Ȯ��
void printStack();

int stack[STACK_SZ];
int top = -1;     //������ ��ġ Ȯ��, �׻� ������ �� ���� ����Ŵ
int main()
{
	push(10);
	push(11);
	push(12);
	pop();
	push(13);
	printStack();
	return;
}

int isEmpty()
{
	if (top <= -1) return true;
	else return false;
}

int isFull()
{
	if (top == STACK_SZ - 1) return true;
	else return false;
}
void push(int data)
{
	if (isFull())
	{
		printf("STACK overflow!!\n");
		return;
	}
	else
	{
		stack[++top] = data;
	}
}

int pop()
{
	if (isEmpty())
	{
		printf("STACK underflow!!\n");
		return;
	}
	else
	{
		return stack[top--];
	}
}

int peek()
{
	if (isEmpty())
	{
		printf("STACK underflow!!\n");
		exit(1);
	}
	else return stack[top];
}

void printStack()
{
	if (!isEmpty())
	{
		for (int i = 0; i <= top; i++)
		{
			printf("%d\t", stack[i]);
		}
	}
}