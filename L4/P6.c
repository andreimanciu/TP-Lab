#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 256

int ArrayStack[MAX_SIZE]; 
int top = -1;  
void Push(int x)
{
	if (top == MAX_SIZE - 1)
	{ 
		printf("Error: stack overflow\n");
		return;
	}
	ArrayStack[++top] = x;
}
int Pop()
{
	int x;
	if (top == -1)
	{
		printf("Error: No element to pop\n");
		return;
	}
	x = ArrayStack[top];
	top--;
	return x;
}

int Peek()
{
	return ArrayStack[top];
}

int IsEmpty()
{
	if (top == -1)
	{
		return 1;
	}
	return 0;
}

void Print() {
	int i;
	printf("Stack: ");
	for (i = 0; i <= top; i++)
	{
		printf("%d ", ArrayStack[i]);
	}
	printf("\n");
}
int main()
{
	int x, i, c = 0;
	do {
		printf("x=");
		scanf("%d", &x);
	} while (x < 0 || x>255);
	for (i = 7;i >= 0;i--)
	{
		if (x >> i & 1) Push(1);
		else Push(0);
	}
	Print();
	for (i = 0;i <= 7;i++)
		if ((x = Pop()) == 1)c++;
	x = 0;
	int l = 128; ///2^7 pt a putea forma valoarea maxima
	for (i = 0;i < c;i++)
	{
		x += l; l /= 2;
	}
	printf("cea mai mare val este:%d\n", x);
	for (i = 7;i >= 0;i--)
		if (x >> i & 1)printf("1 ");
		else printf("0 ");
}