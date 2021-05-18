#include <stdio.h>
#include <stdbool.h>

#define STACK_SZ 3
//#define TRUE 1
//#define FALSE 0

int isEmpty();    //공백체크
int isFull();     //포화체크
void push(int);   //스택에 입력
int pop();        //스택에서 출력
int peek();       //맨위의 스택확인
void printStack();

int stack[STACK_SZ];
int top = -1;     //스택의 위치 확인, 항상 스택의 맨 위를 가리킴
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